#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(int n, vector<int> times) {
    long long answer = 0;
    
    long long min = *min_element(times.begin(), times.end()); // 가장 빠르게 처리하는 심사관이 1명을 심사
    long long max = (long long)n*(*(max_element(times.begin(), times.end()))); // 가장 느리게 처리하는 심사관이 n명을 심사
    
    while(min<=max){
        long long mid = (min+max)/2; // mid분에 몇 명을 처리할 수 있는지
        long long temp = 0;
        for(auto t : times){
            temp+= (mid/t);
        }
        if(temp >= n){  // mid분 동안 처리할 수 있는 사람이 n명 보다 많으면 처리 시간 줄이기
            max = mid-1;
            answer = mid;
        }               // mid분 동안 처리할 수 있는 사람이 n명 보다 적으면 처리 시간 늘리기
        else    min = mid+1;
    }
    return answer;
}

// 처리 시간을 이분 탐색의 대상으로