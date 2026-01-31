#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for(auto c : my_string){
        if(c!='a'&&c!='e'&&c!='i'&&c!='o'&&c!='u'){
            answer.push_back(c);
        }
    }
    return answer;
}

// string을 순회하며 모음이 아닌 문자만 새 string에 push_back