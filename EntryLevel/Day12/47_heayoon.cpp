#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    for(auto c : my_string){
        if(c>='0'&&c<='9'){
            answer += c-'0';
        }
    }
    return answer;
}


// if(c>='0'&&c<='9') 대신 if(isdigit(c)) 가능
// int isdigit(int c);
//      매개변수로 들어온 char 타입이 10진수 숫자로 변경이 가능하면 0이 아닌 숫자(true), 아니면 0(false)를 반환