#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int, vector<int>, greater<int>> pq(scoville.begin(), scoville.end());    // min_heap 가장 낮은 수가 가장 위에
    while(pq.size()>1&&pq.top()<K){
        int first = pq.top();
        pq.pop();
        int second = pq.top();
        pq.pop();
        pq.push(first+2*second);
        answer++;
    }
    if(pq.top()<K)  return -1;
    return answer;
}

// priority_queue
    // 우선순위 큐
    // 큐에 있는 모든 원소 중에서 가장 큰 값이 Top을 유지하도록(max_heap)
    // priority_queue<int> pq                                   //max_heap
        // priority_queue<int,vector<int>,less<int>> pq
    // priority_queue<int,vector<int>,greater<int>> pq          //min_heap