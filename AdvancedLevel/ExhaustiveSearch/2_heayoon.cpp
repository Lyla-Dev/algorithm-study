#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> score(3);
    vector<int> p1 = {1,2,3,4,5};
    vector<int> p2 = {2,1,2,3,2,4,2,5};
    vector<int> p3 = {3,3,1,1,2,2,4,4,5,5};
    for(int i=0; i<answers.size(); i++){
        if(p1[i%5]==answers[i])     score[0]++;
        if(p2[i%8]==answers[i])     score[1]++;
        if(p3[i%10]==answers[i])    score[2]++;
    }
    int max = *max_element(score.begin(), score.end());
    for(int i=0; i<3; i++){
        if(score[i]==max)   answer.push_back(i+1);
    }
    return answer;
}