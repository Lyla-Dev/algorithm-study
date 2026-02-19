#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    int s = min(sides[0], sides[1]);        // 두 변 중 짧은 길이
    int l = max(sides[0], sides[1]);        // 두 변 중 긴 길이
    answer += (l+s) - l;                // l <= x < l+s 
    answer += l - (l-s) -1;             // x < l < x+s      -> l-s < x < l
    return answer;
}

// 매우 간단한 버전
    // int s = min(sides[0], sides[1]);
    // return 2 * s - 1;                    // l-s < x < l+s