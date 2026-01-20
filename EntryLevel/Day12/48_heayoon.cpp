#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            answer.push_back(i);
            while(n%i==0){
                n/=i;
            }
        }
    }
    if(n>1) answer.push_back(n);
    return answer;
}
// 합성수 n이 소인수들의 곱으로 이루어져 있다면, 적어도 하나의 소인수는 반드시 sqrt(n)보다 작거나 같다
// 남은 n이 1보다 크다면 그 남은 값도 소인수

vector<int> solution2(int n) {
    vector<int> answer;
    vector<bool> isPrime(n+1, true);
    isPrime[0] = isPrime[1] = false;
    for(int i=2; i*i<=n; i++){
        if(isPrime[i]){
            for(int j=i*i; j<=n; j+=i){
                isPrime[j] = false;
            }
        }
    }
    for(int i=2; i<=n; i++){
        if(isPrime[i] && n%i == 0) answer.push_back(i);
    }
    return answer;
}
// 에라토스테네스의 체 이용