#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    queue<pair<int,int>> q;
    for(int i=0; i<priorities.size();i++){
        q.push({priorities[i],i});              // [우선순위, 인덱스]
    }
    sort(priorities.begin(), priorities.end(), greater<int>());     // 우선순위를 내림차순으로 정렬
    int idx=0;
    while(!q.empty()){
        int priority = q.front().first;
        int index = q.front().second;
        q.pop();
        
        if(priority == priorities[idx]){            // 남은 프로세스 중 최고 우선순위인 경우
            answer++;
            idx++;
            if(index==location) return answer;
        }
        else    q.push({priority, index});          // 우선순위가 더 높은 프로세스가 있으면 맨 마지막에 push
    }
    return answer;
}


// int priority = q.front().first;
// int index = q.front().second;
// 위 코드를 아래의 코드로 한 줄로 표현 가능
// auto [priority, index] = q.front();