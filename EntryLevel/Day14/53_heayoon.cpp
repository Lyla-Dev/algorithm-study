#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    int sub=100;
    for(auto i : array){
        if(abs(i-n)<sub){
            sub = abs(i-n);
            answer = i;
        }
        if(abs(i-n)==sub){
            answer = min(answer, i);
        }
    }
    return answer;
}

// 두 수의 차의 절댓값이 가장 작은 수를 선택
// O(n)

#include <algorithm>

int solution2(vector<int> array, int n) {
    int answer = 0;
    int gab=100;
    sort(array.begin(), array.end());
    for(auto i : array){
        if(abs(i-n)<gab){
            gab = abs(i-n);
            answer = i;
        }
    }
    return answer;
}

// sort 함수로 정렬하면 가장 가까운 수가 여러 개일 경우를 따로 구하지 않아도 됨
// O(nlogn)