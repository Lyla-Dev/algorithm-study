#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    sort(citations.begin(), citations.end(), greater<int>());
    for(int i=0; i<citations.size(); i++){
        if(citations[i]>=i+1)   answer = i+1;
    }
    return answer;
}

// for문 안에 아래 식으로 바꾸면 값 찾는 즉시 종료 가능
// if(citaions[i]<i+1)  return i; 