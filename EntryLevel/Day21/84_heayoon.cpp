#include <string>
#include <vector>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    bool flag = true;
    for(auto str:dic){
        for(auto c:spell){
            if(str.find(c) == string::npos){     
                flag = false;
            }
        }
        if(flag == true)    return 1;
        flag = true;
    }
    return 2;
}

// dic의 각 단어를 하나씩 꺼내어, spell의 모든 글자가 포함되어 있는지 확인
// str.find(c)  없으면 string::npos 반환
// find(v.begin(), v.end(), c)  없으면 v.end() 반환