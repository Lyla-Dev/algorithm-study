#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    string temp;
    for(int i=0; i*n<my_str.size(); i++){
        int end = min((i+1)*n, static_cast<int>(my_str.size()));
        temp = string(my_str.begin()+i*n, my_str.begin()+end);
        answer.push_back(temp);
    }
    return answer;
}
// string(begin, end): begin부터 end 전까지 복사

// for문을 아래로 바꾸면 더 간단함.
// for(int i=0; i<my_str.size(); i+=n){
//     temp = my_str.substr(i, n);
//     answer.push_back(temp);
// }

// substr(start, len): start부터 최대 len만큼 잘라냄 (범위 초과 시 끝까지)
// substr가 자동으로 끝 처리
// -> 남은 길이 < len 이면 거기까지만 잘라줌