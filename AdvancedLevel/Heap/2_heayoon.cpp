#include <string>
#include <vector>
#include <queue>
#include <tuple>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> jobs) {
    int answer = 0;
    priority_queue<
        tuple<int,int,int>,             // <소요시간, 요청시간, 작업번호>
        vector<tuple<int,int,int>>,
        greater<tuple<int,int,int>>
        > pq;
    sort(jobs.begin(), jobs.end());     // {요청시간, 소요시간}을 오름차순으로 정렬 
    int time=0;     // 현재 시간
    int i=0;        // 작업 번호
    while(!pq.empty() || i<jobs.size()){
        while(i<jobs.size()&&jobs[i][0]<=time){         // 현재시간 전에 들어온 요청이 있으면 push
            pq.push({jobs[i][1], jobs[i][0], i});
            i++;
        }
        if(pq.empty()){             // 대기큐가 비어있으면 현재 시간을 다음 작업 요청이 들어온 시간으로 이동
            time = jobs[i][0];
        }
        else{                       // 다음 작업 실행
            auto [a,b,c]=pq.top();  
            pq.pop();
            time+=a;        // 해당 작업이 끝난 시점으로 이동
            answer+=(time-b);
        }
    }
    return answer/jobs.size();
}

// pair: 두 개의 값을 묶는 자료형
    // pair<int,int> p = {1,2};
    // p.first      // 1
    // p.second     // 2
// tuple: 두 개의 값을 묶는 자료형
    // tuple<int,int,int> t = {1,2,3};
    // get<0>(t)    //1
    // get<1>(t)    //2
    // get<2>(t)    //3

// 구조 분해
    // pair<int,int> p = {10,20};
    // auto [a,b] = p

    // tuple<int,int,int> t = {1,2,3};
    // auto [a,b,c] = t;