#include <string>
#include <vector>
#include <unordered_set>
#include <algorithm>
#include <cmath>

using namespace std;

bool isPrime(int n){
    if(n<2) return false;
    for(int j=2; j*j<=n; j++){
        if(n%j==0)  return false;
    }
    return true;
}

int solution(string numbers) {
    int answer = 0;
    unordered_set<int> s;
    
    sort(numbers.begin(), numbers.end());
    
    do{
        string temp = "";
        for(int i=0; i<numbers.size(); i++){
            temp+=numbers[i];
            s.insert(stoi(temp));
        }
    }while(next_permutation(numbers.begin(), numbers.end()));
    
    for(auto i : s){
        if(isPrime(i))  answer++;
    }
    return answer;
}

// next_permutation(numbers.begin(), numbers.end())
    // 해당 컨테이너에 다음 순열이 존재하면 그 컨테이너의 원소를 해당 순열 순서로 바꾸고 true를 반환하고, 다음 순열이 없다면 false를 반환
    // 오름차순으로 정렬된 값을 가진 컨테이너로만 사용가능