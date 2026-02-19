#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer;
    vector<double> avg;
    for(auto p:score){
        avg.push_back((p[0]+p[1])/2.0);
    }
    for(auto a:avg){
        int rank = 1;
        for(auto b:avg){
            if(a<b) rank++;     // 본인보다 점수가 높은 사람이 있을 때마다 등수 증가
        }
        answer.push_back(rank);
    }
    return answer;
}