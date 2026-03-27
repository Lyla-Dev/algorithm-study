#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int w=0;
    int h=0;
    for(auto i : sizes){
        w=max(w, max(i[0],i[1]));   // 긴쪽
        h=max(h, min(i[0],i[1]));   // 짧은쪽
    }
    return w*h;
}