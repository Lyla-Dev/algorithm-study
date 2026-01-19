#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    vector<int> answer;
    if(direction == "right"){
        answer=vector<int>(numbers.begin(),numbers.end()-1);
        answer.insert(answer.begin(), numbers.at(numbers.size()-1));
    }
    if(direction == "left"){
        answer=vector<int>(numbers.begin()+1,numbers.end());
        answer.push_back(numbers.at(0));
    }
    return answer;
}

// rotate 함수 이용하는 방법 
// rotate(numbers.begin(),numbers.begin()+1,numbers.end());
    // first	회전할 범위의 시작 iterator
    // middle	회전하여 첫번째 요소가 될 범위 내 iterator
    // last	    회전할 범위의 마지막 iterator