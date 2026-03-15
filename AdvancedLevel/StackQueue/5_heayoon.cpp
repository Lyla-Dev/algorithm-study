#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    int i=0, sum=0;                         // i: 다음에 올라갈 트럭의 인덱스, sum: 현재 다리 위 트럭 무게 합
    queue<int> q;
    for(int j=0; j<bridge_length; j++){
        q.push(0);
    }
    while(i<truck_weights.size()){
        answer++;
        sum-=q.front();
        q.pop();
        if(sum+truck_weights[i]<=weight){
            q.push(truck_weights[i]);
            sum+=truck_weights[i];
            i++;
            if(i==truck_weights.size()){        // 마지막 트럭이 올라간 경우 즉시 시간 계산
                answer+=bridge_length;
                break;
            }
        }
        else    q.push(0);
    }
    return answer;
}