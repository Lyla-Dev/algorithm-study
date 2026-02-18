#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

int solution(vector<string> s1, vector<string> s2) {
    int answer = 0;
    unordered_set<string> s(s1.begin(), s1.end());
    for(auto& c : s2){
        if(s.count(c) == 1) answer++;
    }
    return answer;
}

// count 함수
// set, map과 같은 중복을 허용하지 않는 자료구조에서 s.count(c) 하면 c가 set/map 내에 존재할 경우 1 없으면 0 반환

// 참조자 사용
// auto c	문자열 길이만큼 복사
// auto& c	포인터 하나
// 문자열과 같이 크기가 큰 타입은 참조자 사용하기!
// 수정되지 않도록 하기 위해선      const auto& c

// set은 인덱싱 개념 없음.