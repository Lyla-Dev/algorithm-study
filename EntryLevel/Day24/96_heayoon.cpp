#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    char k_ch = k+'0';
    for(int t=i; t<=j; t++){
        string temp = to_string(t);
        answer+=count(temp.begin(), temp.end(), k_ch);
    }
    return answer;
}