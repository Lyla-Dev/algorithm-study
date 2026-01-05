#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int solution(vector<int> array) {
    unordered_map<int, int> count;
    for (auto num : array) {
        count[num]++;
    }
    int max = 0, answer = 0;
    bool dup = false;
    for (auto a : count) {
        if (a.second > max) { max = a.second; answer = a.first; dup = false; }
        else if (a.second == max) { dup = true; } //최빈값이 여러 개인 경우
    }
    if (dup == true) {
        return -1;
    }
    return answer;
}

// unordered_map 사용
// 그냥 map은 key 값을 기준으로 정렬해서 저장. 삽입/삭제/검색 등의 시간복잡도 O(log n)
// unordered_map은 정렬X. 시간복잡도 O(1)