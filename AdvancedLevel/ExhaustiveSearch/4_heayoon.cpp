#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int sum = brown + yellow;
    for(int i=3; i<=sqrt(sum); i++){
        if(sum%i!=0)    continue;
        int j = sum/i;
        if(yellow == (j-2)*(i-2)){
            answer={j,i};
        }
    }
    return answer;
}