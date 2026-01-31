#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int index = (k-1)*2;
    index = index%numbers.size();
    return numbers[index];
}

// k번째로 공을 던지는 사람의 번호 = k-1번째로 공을 받는 사람의 번호        // 후자로 접근