#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int i = sqrt(n);
    if(i == static_cast<int>(i))  return 1;
    return 2;
}

// static_cast로 i가 정수인지 판별

int solution2(int n) {
    int i = sqrt(n);
    if(i*i == n)  return 1;
    return 2;
}