#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    string temp = "";
    for(auto c : my_string){
        if(isdigit(c))  temp+=c;
        else if(temp != ""){
            answer += stoi(temp);
            temp = "";
        }
    }
    if(temp!="") answer+=stoi(temp);
    return answer;
}
// 숫자인 경우 temp에 저장하고 문자가 나오면 temp를 더함

// 다른 풀이
int solution2(string my_string) {
    int answer = 0;
    for(auto& v : my_string)
    {
        if(!isdigit(v))     v = ' ';
    }

    stringstream ss;
    ss.str(my_string);
    int temp = 0;
    while(ss)
    {
        answer += temp;
        ss >> temp;
    }
    return answer;
}
// string에서 문자는 공백으로 바꾼 후 공백 기준으로 분리해 각 수를 더함.