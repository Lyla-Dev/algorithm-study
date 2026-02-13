#include <string>
#include <vector>

using namespace std;

int solution(int chicken) {
    int answer = 0;
    while(chicken>=10){
        answer+=chicken/10;                 // 쿠폰 10장 마다 서비스 치킨 1개
        chicken = chicken/10+chicken%10;    // 남은 쿠폰 수는 서비스 치킨 개수 + 쓰고 남은 쿠폰 개수
    }
    return answer;
}