#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    int oddCount = 0, evenCount = 0;
    for(int i=0; i< num_list.size(); i++){
        num_list[i]%2 == 0 ? evenCount++ : oddCount++;
    }
    return {evenCount, oddCount};
}

// for (int num : num_list) {
//     answer[num % 2]++;
// }
// 다른 사람 풀이인데 삼항 연산자나 조건문 안쓰고 간단하게 쓸 수 있는 방법이 있더라구요.