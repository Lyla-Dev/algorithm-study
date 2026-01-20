#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int mul = 1;
    for(int i=1; i<=n; i++){
        mul *= i;
        if(mul==n){
            answer = i;
            break;
        } 
        if(mul>n){
            answer = i-1;
            break;
        }
    }
    return answer;
}