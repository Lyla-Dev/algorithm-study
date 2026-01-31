#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    stringstream ss(my_string);
    
    int num;
    string op = "";
    ss >> answer;
    
    while(ss){
        if(op == "+")   answer += num;
        if(op == "-")   answer -= num;
        ss>>op>>num;
    }
    return answer;
}

// ss >> op >> num
//     stringstream ss에서 공백 기준으로 값을 하나씩 읽어서 op, num에 타입에 맞게 변환하여 저장.