#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    int mid = ceil(double(total)/num);  //
    for(int i=0; i<num; i++){
        answer.push_back(mid-num/2+i);
    }
    return answer;
}
// total의 중앙값(mid)을 기준으로 앞뒤로 num/2만큼 씩
// num이 짝수일 때 중심이 애매해서 위험한 방법이라고 함!! (통과되긴 했음)

// 다른 풀이
vector<int> solution2(int num, int total) {
    vector<int> answer;
    int a = (2*total-num*(num-1))/(2*num);
    for(int i=0; i<num; i++){
        answer.push_back(a+i);
    }
    return answer;
}
// 등차수열의 합공식 이용
// total = num(2a+(num-1))/2      => a = (2*total-num*(num-1))/(2*num)