#include <string>
#include <vector>

using namespace std;

int solution(int order) {
    int answer = 0;
    string str = to_string(order);
    for(auto c : str){
        if((c-'0')%3==0 && c!='0'){
            answer++;
        }
    }
    return answer;
}

// 문자열과 정수형 형변환
// string to int    -> stoi(str)
// int to string    -> to_string(i)