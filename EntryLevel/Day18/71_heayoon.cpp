#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n, int t) {
    return n*pow(2,t);
}

// 쉬프트 연산자 사용하여 계산 가능함
// return n << t;