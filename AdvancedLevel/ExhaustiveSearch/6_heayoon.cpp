#include <string>
#include <vector>
#include <queue>

using namespace std;

int cnt;
vector<int> graph[101];

void bfs(int i, int j){
    queue<int> q;
    vector<int> visit(101,0);
    cnt = 1;
    
    q.push(i);
    visit[i]=1;
    while(!q.empty()){
        int f = q.front();
        q.pop();
        for(int k=0; k<graph[f].size(); k++){
            int next = graph[f][k];
            if((f==i&&next==j)||(f==j&&next==i))    continue;
            if(visit[next]) continue;
            q.push(next);
            visit[next]=1;
            cnt++;
        }
    }
}

int solution(int n, vector<vector<int>> wires) {
    int answer = n;
    
    for(auto w : wires){
        graph[w[0]].push_back(w[1]);
        graph[w[1]].push_back(w[0]);
    }
    
    for(auto w : wires){
        int v1=w[0];    int v2=w[1];
        bfs(v1,v2);
        answer = min(answer, abs(2*cnt-n));
    }
    return answer;
}

// BFS  -> 큐 사용
// DFS도 사용 가능

// DFS → 경로/순서 기반 완전 탐색, 상태 백트래킹 필요할 때
// BFS → 연결된 노드 모두 방문, 레벨별 탐색이나 거리 계산 필요할 때