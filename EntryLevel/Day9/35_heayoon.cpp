#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

const unordered_map<char, char> win = {{'2', '0'}, {'0', '5'}, {'5', '2'}};

string solution(string rsp) {
    string answer = "";
    for(char c : rsp){
        answer += win.at(c);
    }
    return answer;
}

// const로 map을 정의한 경우 win[c] 이런 식으로 요소 접근이 불가능 함.
//      [] 연산자는 맵의 내용을 수정할 가능성이 있기 때문.