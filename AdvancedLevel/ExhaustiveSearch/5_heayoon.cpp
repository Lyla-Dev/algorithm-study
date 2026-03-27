#include <string>
#include <vector>

using namespace std;

int answer;
bool visit[8];

void dfs(int count, int k, vector<vector<int>>& dun){
    if(count>answer)    answer = count;
    for(int i=0; i<dun.size(); i++){
        if(!visit[i] && dun[i][0]<=k){
            visit[i]=true;
            dfs(count+1, k-dun[i][1], dun);
            visit[i]=false;
        }
    }
}

int solution(int k, vector<vector<int>> dungeons) {
    answer = 0;
    dfs(0, k, dungeons);
    return answer;
}

// DFS -> 스택/재귀 사용
// 순서에 따라 결과 달라지는 경우 DFS 사용