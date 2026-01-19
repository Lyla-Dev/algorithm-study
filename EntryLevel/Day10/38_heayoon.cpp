#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer;
    for(int i=0; i<num_list.size()/n; i++){
        vector<int> temp(num_list.begin()+i*n,num_list.begin()+(i+1)*n); 
        answer.push_back(temp);
    }
    return answer;
}

// vector<int> temp(vec.begin(), vec.begin()+i); 
// vec의 첫번째 원소부터 i-1원소까지 복사해 새로운 벡터 temp 생성 (vec[0] ~ vec[i-1] 총 i개)