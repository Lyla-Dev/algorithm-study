#include <string>
#include <vector>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    string answer = "fail";
    for(auto mem:db){   
        if(id_pw[0]==mem[0]){       // id 일치
            answer="wrong pw";
            if(id_pw[1]==mem[1]){   // id, pw 일치
                answer="login";
                break;
            }
        }
    }
    return answer;
}