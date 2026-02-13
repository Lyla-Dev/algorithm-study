#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> strlist) {
    vector<int> answer;
    for(auto s : strlist){
        answer.push_back(s.size());
    }
    return answer;
}

// s.size()와 s.length()는 완전히 동일하게 동작