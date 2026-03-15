#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    answer.push_back(arr[0]);
    for(int i=1; i<arr.size(); i++){
        if(arr[i]!=arr[i-1])    answer.push_back(arr[i]);
    }
    return answer;
}

// 다른 풀이
vector<int> solution2(vector<int> arr) 
{
    arr.erase(unique(arr.begin(), arr.end()),arr.end());
    vector<int> answer = arr;
    return answer;
}

// unique(v.begin(), v.end())       
//      연속된 중복 원소를 제거, 
//      중복을 제거한 뒤의 새로운 끝 iterator 반환
//      실제로 벡터 크기는 줄지 않음
// arr.erase(it, arr.end());
//      it부터 end()까지 삭제