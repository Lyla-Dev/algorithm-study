#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    vector<string> str;
    string temp = "";
    for(auto c : s){    // string을 공백 기준으로 분리
        if(c == ' '){
            str.push_back(temp);
            temp = "";
        }
        else{
            temp+=c;
        }
    }
    str.push_back(temp);
    
    for(int i=0; i<str.size(); i++){    // "Z" 나오면 바로 이전 값 빼기
        if(str[i] == "Z"){
            answer -= stoi(str[i-1]);
        }
        else{
            answer += stoi(str[i]);
        }
    }
    
    return answer;
}

// stoi(str) 함수
//  string to int

//------------------------------------------------------------------------
// stringstream 사용하면 
//          공백 기준으로 분리 가능, 형 변환 필요 없이 자동으로 타입 변환 
#include <sstream>

int solution2(string s) {
    int answer = 0;
    stringstream ss(s); //stream 생성
    vector<int> vec;
    string temp = "";
    while(ss >> temp){  // ss에서 값을 하나 읽을 수 있는 동안 반복해라!
                        // 공백 기준으로 문자열 하나 읽음. 읽은 값을 tmp에 저장. 성공하면 true, 실패하면 false
        if(temp == "Z"){
            vec.pop_back();
        }
        else{
            vec.push_back(stoi(temp));
        }
    }
    for(auto i : vec){
        answer+=i;
    }
    
    return answer;
}