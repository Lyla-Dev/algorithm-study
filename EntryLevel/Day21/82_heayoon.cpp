#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> board) {
    int answer = 0;
    int size = board.size();
    vector<vector<int>> d = board;
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(board[i][j] == 1){               // 지뢰 주변 8개 블록 1처리
                for(int x=-1; x<=1; x++){       
                    for(int y=-1;y<=1;y++){
                        int nx = i+x;
                        int ny = j+y;
                        if(nx>=0&&nx<size&&ny>=0&&ny<size)  d[nx][ny]=1;
                    }
                }
            }
        }
    }
    
    for(const auto& v: d){
        answer+=count(v.begin(), v.end(), 0);
    }
    return answer;
}