#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string letter) {
    string answer = "";
    for(auto c : my_string){
        if(c != letter[0])  answer.push_back(c);
    }
    return answer;
}
// 시간 복잡도 O(N)
// 공간 복잡도 O(N)

//------------------------------------------------------------------------
// string solution(string my_string, string letter) {
//     for(int i=0; i<my_string.size(); ){
//         if(my_string[i] == letter[0])  my_string.erase(i, 1);
//         else    i++;
//     }
//     return my_string;
// }
// 시간 복잡도 O(N^2)
// 공간 복잡도 O(1)
// 이 방법은 추가 문자열 변수 없이 해결 가능하지만 시간 복잡도가 높아 첫 번째 방법이 더 효율적인 것으로 보임.

//-------------------------------------------------------
// string 문자 붙이기
// 문자 1개 → push_back()
// 문자열 여러 개 → append() / +=