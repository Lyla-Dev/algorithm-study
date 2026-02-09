#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int height) {
    int answer = 0;
    for(auto h : array){
        if(h>height)    answer++;
    }
    return answer;
}

// if문 대신 아래와 같이 계산 가능.
// answer += (h > height);