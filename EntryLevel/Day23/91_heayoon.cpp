#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    for(auto b:babbling){
        bool find = false;
        for(int i=0; i<b.size();){
            if(b.find("aya",i)==i)          i+=3;   // 현재 위치에서 "aya"가 시작되면 3칸 이동
            else if(b.find("ye",i)==i)      i+=2;   // "ye"가 시작되면 2칸 이동
            else if(b.find("woo",i)==i)     i+=3;
            else if(b.find("ma",i)==i)      i+=2;
            else{find = true; break;}
        }
        if(!find)   answer++;
    }
    return answer;
}