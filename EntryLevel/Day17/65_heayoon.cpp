#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    string str = to_string(num);
    for(int i=0; i<str.size(); i++){
        if(str[i]-'0' == k)   return i+1;
    }
    return -1;
}

// char to int 로 형변환 하는 함수 없음
// ch - '0'으로 형변환.