#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    unordered_map<string, int> m;
    for(auto k : clothes){
        m[k[1]]++;
    }
    for(auto& [key, value] : m){
        answer*=(value+1);
    }
    return answer-1;
}

// map 내부 원소는 전부 pair 형태
// 구조 분해 
// for (const auto& [key, value] : m)