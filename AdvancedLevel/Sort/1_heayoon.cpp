#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for(auto com : commands){
        int i=com[0], j=com[1], k=com[2];
        vector<int> temp(array.begin()+i-1, array.begin()+j);   // slice
        sort(temp.begin(), temp.end());                         // sort
        answer.push_back(temp[k-1]);                            // push_back
    }
    return answer;
}

// 벡터 temp를 정의하면서 array의 일부 복사
    // vector<int> temp(array.begin() + start, array.begin() + end);
// 이미 temp가 정의되어 있을 때 array의 일부 복사
    // temp.assign(array.begin() + start, array.begin() + end);     // assign 함수