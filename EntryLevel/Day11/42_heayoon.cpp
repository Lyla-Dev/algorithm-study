#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    if(n==1)    return 0;   
    int answer = 0;
    for(int i=2; i<=n; i++){
        for(int j=2; j<i; j++){
            if(i%j == 0){
                answer++;
                break;
            }
        }
    }
    return answer;
}

// 합성수는 1과 자기 자신 외에 다른 약수를 가지는 수
// 어떤 수 i 를 2 부터 (i-1) 까지 나눴을 때 딱 나누어 떨어지는 수가 하나라도 있으면 i는 합성수