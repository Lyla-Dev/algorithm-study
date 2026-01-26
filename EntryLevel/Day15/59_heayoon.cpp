#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(string s) {
    string answer = "";
    map<char,int> m;
    for(auto c : s){
        m[c]++;
    }
    for(auto iter : m){
        if(iter.second == 1){
            answer+=iter.first;
        }
    }
    return answer;
}

// map은 key를 기준으로 자동 정렬

// for (auto iter : m) 
//  -> pair<const char, int> iter
// iter.first, iter.second로 각각 key, value 접근