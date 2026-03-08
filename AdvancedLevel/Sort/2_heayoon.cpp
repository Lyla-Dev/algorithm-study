#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int a, int b){
    string A = to_string(a);
    string B = to_string(b);
    return A+B > B+A;
}

string solution(vector<int> numbers) {
    string answer = "";
    sort(numbers.begin(), numbers.end(), compare);
    if(numbers.front()==0)  return "0";
    for(auto i : numbers)   answer+=to_string(i);
    return answer;
}

// 람다식 사용
    // sort(numbers.begin(), numbers.end(), [](int a, int b){
    //     return to_string(a) + to_string(b) >
    //         to_string(b) + to_string(a);
    // });