#include <string>
#include <vector>

using namespace std;

int cnt=-1;
int answer=0;
bool found=false;
const string aeiou = "AEIOU";
string target;

void dfs(string w){
    if(found)   return;
    if(w.size()>5)  return;
    cnt++;
    if(w == target){
        answer = cnt;
        found = true;
        return;
    }
    for(int i=0; i<5; i++){
        dfs(w+aeiou[i]);
    }
}

int solution(string word) {
    target = word;
    dfs("");
    return answer;
}

// DFS

// 다른 풀이 (수학적 계산)
int solution2(string word) {
    vector<int> weight = {781, 156, 31, 6, 1};
    string aeiou = "AEIOU";
    
    int answer2 = 0;
    
    for(int i = 0; i < word.size(); i++){
        int idx = aeiou.find(word[i]); // A=0, E=1 ...
        answer2 += idx * weight[i] + 1;
    }
    
    return answer2;
}
// A에서 E로 넘어갈 때 그 사이의 단어의 개수: 781
// AA에서 AE로 넘어갈 때 그 사이의 단어 개수: 156
// ...