#include <string>
#include <vector>
#include <algorithm>

using namespace std;

const vector<string> number = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

long long solution(string numbers) {
    long long answer = 0;
    string temp = "";
    for(auto c:numbers){
        temp += c;
        auto index = find(number.begin(), number.end(), temp);
        if(index != number.end()){          // find(number.begin(), number.end(), temp) == number.end() 인 경우 number 내에 temp가 존재X
            answer = answer*10 + index-number.begin();      // find함수는 이터레이터를 반환. 인덱스를 구하려면 -number.begin() 필요.
            temp = "";
        }
    }
    return answer;
}