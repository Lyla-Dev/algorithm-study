#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    for(auto str : quiz){
        stringstream ss(str);
        int x,y,z;
        string op,eq;
        ss>>x>>op>>y>>eq>>z;
        if(op=="+"){
            x+y==z ? answer.push_back("O") : answer.push_back("X");
        }
        if(op=="-"){
            x-y==z ? answer.push_back("O") : answer.push_back("X");
        }
    }
    return answer;
}

// ss>>x>>op>>y>>eq>>z;
//      "X + Y = Z"로 주어지면
//  x = X, op= "+", y=Y, eq="=", z=Z 로 저장. 