#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    sort(numbers.begin(), numbers.end(),greater<>());
    return numbers[0]*numbers[1];
}

// greater 구조체: 인수에 대해 보다 큰 연산(operator>)을 수행하는 이진 조건자
// sort(numbers.begin(), numbers.end())                 -> 오름차순 정렬
// sort(numbers.begin(), numbers.end(),greater<>())     -> 내림차순 정렬