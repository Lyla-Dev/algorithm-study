#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    for(int i=0; i<my_string.size(); i++){
        answer.append(n, my_string[i]);
    }
    return answer;
}

// basic_string& append(size_type count, CharT ch);  // count 개의 문자 ch 를 뒤에 추가한다.