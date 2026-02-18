#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    if(str1.find(str2) != string::npos) return 1;
    return 2;
}

// a.func()와 func(a)
// a.func() -> 멤버 함수.  a라는 객체 안에 들어있는 함수
// func(a) -> 일반 함수. 어떤 객체에도 소속되지 않은 함수

// 자료구조 자체의 기능 → a.func()
// 여러 자료구조에 공통 → func(a, b)