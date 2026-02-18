#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer = {0, 0};
    for(int i=0; i<array.size(); i++){
        if(answer[0] < array[i]){
            answer = {array[i], i};
        }
    }
    return answer;
}