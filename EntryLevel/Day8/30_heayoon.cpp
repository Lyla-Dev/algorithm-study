#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    string age_str = to_string(age);
    for(auto a : age_str){
        answer.push_back('a' + a - '0');
    }
    return answer;
}
// int형을 string으로 변환하여 계산

// 다른 풀이
string solution2(int age) {
    string answer = to_string(age);
    for (char& c : answer)
        c = 'a' + (c - '0');
    return answer;
}
// 첫 번째 방법과 같이 int형을 string으로 변환하여 계산
// 참조 사용해 메모리 사용 적음.
// 참조자 사용을 더 적극적으로 해보겠습니다. 