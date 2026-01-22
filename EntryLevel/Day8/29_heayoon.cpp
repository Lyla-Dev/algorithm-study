#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, int num1, int num2) {
    vector<int> answer;
    for(int i=num1; i<=num2; i++){
        answer.push_back(numbers[i]);
    }
    return answer;
}

// 다른 풀이
// vector<int> answer(numbers.begin()+num1,numbers.begin()+num2+1);