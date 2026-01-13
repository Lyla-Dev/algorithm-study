#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = (n/2) * (2 + n) / 2;
    return answer;
}

// 등차수열의 합 공식 사용
// S = n * ( a1 + an ) / 2
// n: 항의 개수
// a1: 첫 번째 항
// an: n번째 항 (마지막 항)