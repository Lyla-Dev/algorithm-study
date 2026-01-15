#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer(emergency.size());
    vector<vector<int>> temp;
    
    for(int i=0; i<emergency.size(); i++){
        temp.push_back({emergency[i], i});      // {응급도, 원래 위치}
    }
    sort(temp.rbegin(), temp.rend());   // 응급도 기준으로 내림차순 정렬
    
    for(int i=0; i<temp.size(); i++){
        answer[temp[i][1]] = i+1;       // 정렬된 순서대로 등수 부여 
                                        // i + 1 : 우선순위 (1부터 시작) 
                                        // temp[i][1] : 해당 값의 원래 위치
    }
    return answer;
}
// 2차원 배열 사용
// 내림차순 정렬 
// sort(temp.rbegin(), temp.rend());
// or
// sort(v.begin(), v.end(), greater<int>());

// 다른 풀이 (map 사용)
#include <map>

vector<int> solution2(vector<int> emergency) {
    int size = emergency.size();
    vector<int> answer(size);
    map<int, int> order;
    
    for(auto& p : emergency)    order[p];           // 모든 응급도를 map의 key로 삽입.(value는 모두 0으로)
    int priority = size;
    for(auto& p : order)    p.second = priority--;  // value에 우선순위 부여
    for(int i=0; i<size; i++){                      // 원래 emergency 순서를 기준으로 각 응급도의 우선순위를 저장
        answer[i] = order[emergency[i]];
    }
    
    return answer;
}
// 2차원 배열 대신 map 사용 -> key값에 따라 자동으로 오름차순 정렬