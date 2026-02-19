#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> lines) {
    int answer = 0;
    for(int i=-100; i<=100; i++){
        int temp=0;
        for(int j=0; j<3; j++){
            if(i>=lines[j][0]&&i<lines[j][1])  temp++;
        }
        if(temp>=2) answer++;
    }
    return answer;
}

// -100부터 100까지 순회하며 겹치는 직선이 2개 이상인 경우 answer++