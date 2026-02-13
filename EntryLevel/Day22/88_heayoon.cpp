#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int solution(int a, int b) {
    b/=gcd(a,b);
    while(b%2==0)   b/=2;
    while(b%5==0)   b/=5;
    return (b==1)?1:2;
}
// 최대공약수 구해 분모를 나눠 기약분수로 만든 뒤 분모에서 2와 5를 인수로 모두 제거했을 때 남는 값이 1인지 확인

// 다른 풀이
int solution2(int a, int b) {
    int answer = 0;
    while(b % 2 == 0)
    {
        b /= 2;
    }
    while(b % 5 == 0)
    {
        b /= 5;
    }
    return (a % b == 0)?1:2;
}
//분모에서 2와 5를 먼저 다 제거한 후, 남은 분모 값이 분자 a를 나누어떨어지게 하는지 확인