#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numlist, int n) {
    vector<int> answer;
    for(auto i:numlist){
        bool inserted = false;
        for(int j=0; j<answer.size(); j++){
            int di = abs(n-i);                  // 현재 숫자(i)와 n의 거리
            int dj = abs(n-answer[j]);          // 이미 정렬된 숫자와 n의 거리
            if(di < dj || (di==dj && i>answer[j])){
                answer.insert(answer.begin()+j, i);
                inserted = true;
                break;
            }
        }
        if(inserted == false)   answer.push_back(i);
    }
    return answer;
}

// 다른 풀이 (sort + 람다식)
vector<int> solution2(vector<int> numlist, int n) {
    sort(numlist.begin(), numlist.end(), [n](int a, int b){
        int da = abs(a - n);
        int db = abs(b - n);
        if (da == db)
            return a > b;       // 거리 같으면 큰 값 먼저
        return da < db;         // n과의 거리 작은 순
    });
    return numlist;
}

// 람다식
// [캡처] (매개변수) { 함수 동작 } (호출인자)
    // [] (int a, int b) { cout << a + b << endl; } (10, 20)
// sort함수 와 람다식
    // sort(시작, 끝, 함수)