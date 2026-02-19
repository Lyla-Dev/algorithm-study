#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for(int i=1; i<=n; i++){ 
        answer++;
        while(answer%3==0 || to_string(answer).find("3")!=string::npos){
            answer++;
        }
    }
    return answer;
}

// 3의 배수이거나 3을 포함하면 해당되지 않을 때까지 1씩 더함