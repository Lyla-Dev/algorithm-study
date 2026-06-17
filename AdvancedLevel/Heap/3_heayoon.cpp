#include <string>
#include <vector>
#include <queue>
#include <sstream>

using namespace std;

vector<int> solution(vector<string> operations) {
    vector<int> answer;
    priority_queue<pair<int,int>,vector<pair<int,int>>,less<pair<int,int>>> maxpq;      // {숫자, 인덱스}
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minpq;
    vector<bool> removed;           // 해당 인덱스의 숫자가 삭제되었는지를 저장
                                    // true: 삭제됨, false: 유효함
    
    auto clean=[&](auto& pq){                           // heap의 top에서부터 삭제된 요소는 pop
        while(!pq.empty()&&removed[pq.top().second]){
            pq.pop();
        }
    };
    auto removeTop=[&](auto& pq){                       // heap의 top을 삭제하고 removed 벡터에 삭제됨을 저장
        if(!pq.empty()){
            auto [a,b] = pq.top();
            pq.pop();
            removed[b] = true;
        } 
    };
    
    int i=0;            // 삽입된 숫자의 인덱스
    for(auto str : operations){
        stringstream ss(str);
        char c;
        int n;
        ss >> c >> n;
        if(c=='I'){
            maxpq.push({n, i});
            minpq.push({n, i});
            removed.push_back(false);
            i++;
        }
        else if(c=='D'&&n==1){
            clean(maxpq);
            removeTop(maxpq);
        }
        else if(c=='D'&&n==-1){
            clean(minpq);
            removeTop(minpq);
        }
    }
    clean(maxpq);
    clean(minpq);
    if(maxpq.empty() || minpq.empty())  return {0,0};
    return {maxpq.top().first, minpq.top().first};
}

// 람다함수
// auto func = [&](auto a){}
    // [&]의 역할: 람다 캡처. 외부 변수들을 참조로 사용
    // auto clean=[&](auto& pq){~}      // 여기에서 removed 벡터를 사용해야 하는데 
                                        // removed는 람다 내부 변수가 아니라 solution 함수의 변수임
                                        // 따라서 [&] 람다 캡처를 이용해 외부 변수 접근 허용해야함

// 다른 풀이 (multiset 사용)
vector<int> solution2(vector<string> operations) {
    vector<int> answer;
    multiset<int> mts;
    for(auto str : operations){
        stringstream ss(str);
        char c;
        int n;
        ss >> c >> n;
        if(c=='I')  mts.insert(n);
        else if(!mts.empty()&&c=='D'&&n==1)     mts.erase(--mts.end());
        else if(!mts.empty()&&c=='D'&&n==-1)    mts.erase(mts.begin());
    }
    if(mts.empty())  return {0,0};
    int max = *(--mts.end());
    int min = *mts.begin();
    return {max,min};
}
// multiset: 중복을 허용하는 set
// c++에서 set은 기본적으로 오름차순 정렬
// mts.end()    mts의 마지막 다음 위치
    // 마지막 위치는 --mts.end()