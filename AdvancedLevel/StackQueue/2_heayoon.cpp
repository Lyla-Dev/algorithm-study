#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> days;
    const int n = progresses.size();
    for(int i=0; i<n; i++){
        days.push_back((100-progresses[i]+speeds[i]-1)/speeds[i]);
    }
    int today=days[0], num=1;
    for(int i=1; i<n; i++){
        if(days[i]<=today)  num++;
        else{
            answer.push_back(num);
            num=1;
            today = days[i];
        }
    }
    answer.push_back(num);
    return answer;
}
// 시간복잡도 O(n)
// 공간복잡도 O(n)


// 다른 풀이
// days 벡터 정의 안함. 반복문 1개
vector<int> solution2(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    const int n = progresses.size();
    int today = (100-progresses[0]+speeds[0]-1)/speeds[0];
    int num=1;
    for(int i=1; i<n; i++){
        int day = (100-progresses[i]+speeds[i]-1)/speeds[i];
        if(today>=day) num++;
        else{
            answer.push_back(num);
            num=1;
            today = day;
        }
    }
    answer.push_back(num);
    return answer;
}
// 시간복잡도 O(n)
// 공간복잡도 O(1)