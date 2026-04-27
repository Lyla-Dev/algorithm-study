#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <queue>

using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    unordered_map<string, int> sum;
    unordered_map<string, priority_queue<pair<int,int>>> songs; 
    
    for(int i=0; i<genres.size(); i++){
        sum[genres[i]] += plays[i];
        songs[genres[i]].push({plays[i], -i});      // 많이 재생된 노래 먼저, 재생 횟수가 같은 노래는 고유 번호가 낮은 노래 먼저
    }
    
    vector<pair<string,int>> sorted(sum.begin(), sum.end());
    sort(sorted.begin(),sorted.end(),[](auto& a, auto& b){      // 속한 노래가 많이 재생된 장르 순서대로 정렬
        return a.second > b.second;
    });
    
    for(const auto& g : sorted){
        auto& pq=songs[g.first];
        
        for(int i=0; !pq.empty()&&i<2;i++){
            answer.push_back(-pq.top().second);
            pq.pop();
        }
    }
    return answer;
}