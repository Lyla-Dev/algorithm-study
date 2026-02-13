#include <string>
#include <vector>

using namespace std;

int solution(string A, string B) {
    string temp = A;
    for(int i=0; i<A.size(); i++){
        if(temp == B)   return i;
        temp = temp.back()+temp.substr(0,temp.size()-1);    // 오른쪽으로 회전
    }
    return -1;
}

// 다른 풀이
int solution2(string A, string B)
{
    B += B;
    return B.find(A);
}
// 문자열을 회전시키면 반드시 (원본 + 원본) 안에 포함됨.