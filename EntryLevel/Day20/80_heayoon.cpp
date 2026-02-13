#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string polynomial) {
    string answer = "";
    stringstream ss(polynomial);
    string temp = "";
    int v=0, c=0;
    while(ss >> temp){
        if(temp.find('x')!=string::npos){                       // 변수
            if(temp[0]=='x')    v++;                            // x 형태
            else    v+=stoi(temp.substr(0, temp.size()-1));     // nx 형태
        }           
        else if(isdigit(temp[0]))   c+= stoi(temp);             // 상수
    }
    if(v == 0)  return to_string(c);
    if(c == 0)  return (v==1 ? "x":to_string(v)+"x");
    return v==1?"x + "+to_string(c) : to_string(v)+"x + "+to_string(c);
}

// stringstream ss
// ss >> temp           //공백 기준으로 분리