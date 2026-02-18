#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    string str = "";
    for(auto i : array){
        str += to_string(i);
    }
    return count(str.begin(), str.end(), '7');
}

// count(begin(), end(), value);
// 자료구조 내 원하는 값(value)가 몇 개 존재하는지 확인
// count_if(begin(), end(), 조건);
// 자료구조 내 원하는 조건을 만족하는 개수를 확인