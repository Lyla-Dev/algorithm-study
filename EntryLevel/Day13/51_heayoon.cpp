#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

string solution(string my_string) {
    string answer = "";
    unordered_set<char> s;
    for(auto c : my_string){
        if(s.find(c) == s.end()){
            answer += c;
            s.insert(c);
        }
    }
    return answer;
}

// set은 오름차순으로 자동 정렬
// unordered_set은 정렬 X

// s.find(c) == s.end() -> c가 set에 없음.

//----------------------------------------------------
// 문자열의 find() 함수와 컨테이너의 find()함수 차이

// 문자열의 find()함수      // str.find("abc");
    // <string>
    // 인덱스 반환
    // 못 찾으면 string::npos 반환

// 컨테이너(vector, map, set 등)의 find()함수    // find(vec.begin(), vec.end(), n);
    // <algorithm>
    // iterator 반환
    // 못 찾으면 vec.end() 반환