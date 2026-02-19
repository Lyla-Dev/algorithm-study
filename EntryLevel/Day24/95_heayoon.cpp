#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string before, string after) {
    sort(before.begin(), before.end());
    sort(after.begin(), after.end());
    if(before == after) return 1;
    return 0;
}
// O(nlogn)

int solution(string before, string after) {
    vector<int> cnt(26, 0);                 // 알파벳 저장 벡터

    for (char c : before) cnt[c - 'a']++;
    for (char c : after) cnt[c - 'a']--;

    for (int n : cnt){
        if (n != 0) return 0;
    }

    return 1;
}
// O(n)