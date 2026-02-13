#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<int> common) {
    int answer = 0;
    int a = common.front();
    int d = common[1]-common[0];        // 공차
    int r = common[1]/common[0];        // 공비
    if(a+2*d == common[2]){         // 등차수열인 경우
        return a+common.size()*d;
    }
    else{                           // 등비수열인 경우
        return a*pow(r,common.size());
    }
}