#include <string>
#include <vector>
#include <algorithm>

using namespace std;

const vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

string solution(string letter) {
    string answer = "";
    string temp = "";
    for(int i=0; i<=letter.size(); i++){
        if(letter[i] == ' ' || i == letter.size()){
            int index = find(morse.begin(), morse.end(), temp) - morse.begin();
            answer.push_back('a'+index);
            temp = "";
        }
        else temp.push_back(letter[i]);
    }
    return answer;
}

// 다른 풀이 방법
const unordered_map<string, char> morse2 = {
    {".-", 'a'},   {"-...", 'b'}, {"-.-.", 'c'}, {"-..", 'd'}, {".", 'e'},   {"..-.", 'f'},
    {"--.", 'g'},  {"....", 'h'}, {"..", 'i'},   {".---", 'j'}, {"-.-", 'k'}, {".-..", 'l'},
    {"--", 'm'},   {"-.", 'n'},   {"---", 'o'},  {".--.", 'p'}, {"--.-", 'q'}, {".-.", 'r'},
    {"...", 's'},  {"-", 't'},    {"..-", 'u'},  {"...-", 'v'}, {".--", 'w'}, {"-..-", 'x'},
    {"-.--", 'y'}, {"--..", 'z'}
};

string solution(string letter) {
    string answer = "";
    stringstream ss(letter);
    string temp;
    while(ss>>temp){
        answer += morse2.at(temp);
    }
    return answer;
}
// c++에서는 split() 함수를 지원하지 않고 sstream으로 string을 분리할 수 있음
// stringstream 함수 이용해 문자열을 공백 기준으로 분리
// map 사용하면 더 쉽게 검색 가능