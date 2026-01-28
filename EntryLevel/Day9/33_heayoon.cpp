#include <string>
#include <vector>

using namespace std;

int solution(int hp) {
    int answer = hp/5 + (hp%5)/3 + ((hp%5)%3);
    return answer;
}


// 가독성 좋게 쓴 버전

int solution2(int hp) {
    int answer=0;
    answer += hp/5;
    hp %= 5;
    answer += hp/3;
    hp %= 3;
    answer += hp/1;
    return answer;
}