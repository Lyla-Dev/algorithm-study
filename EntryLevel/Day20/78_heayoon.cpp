#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

const unordered_map<string, vector<int>> way = {
    {"up",      {0,1}},
    {"down",    {0,-1}},
    {"left",    {-1,0}},
    {"right",   {1,0}}
};

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer = {0,0};
    int maxX = board[0]/2, maxY = board[1]/2;
    vector<int> temp;
    for(auto s : keyinput){
        temp = way.at(s);
        answer[0] = max(-maxX, min(answer[0]+temp[0], maxX));
        answer[1] = max(-maxY, min(answer[1]+temp[1], maxY));
    }
    return answer;
}

// 경계 체크
// max(-경계, min(x, +경계))