#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int distance, vector<int> rocks, int n) {
    int answer = 0;
    sort(rocks.begin(), rocks.end());
    int left = 0;   // 두 바위 사이의 거리 최솟값
    int right = distance;   // 두 바위 사이의 거리 최댓값
    while(left<=right){
        int mid = (left+right)/2;   // mid가 각 바위 사이 거리의 최솟값일 때
        int cnt=0;
        int prev = 0;
        for(auto i : rocks){
            if(i-prev<mid)  cnt++;
            else    prev=i;
        }
        if(distance-prev<mid)   cnt++;
        if(cnt<=n){         // 제거한 바위의 수가 n개 이하인 경우 두 바위 사이 거리 늘리기
            left=mid+1;
            answer=mid;
        }                   // 제거한 바위의 수가 n개 초과할 경우 두 바위 사이 거리 줄이기
        else    right=mid-1;
    }
    return answer;
}

// 각 바위 사의 거리의 최솟값을 이분 탐색의 대상으로