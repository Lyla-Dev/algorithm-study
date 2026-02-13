#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) {
    vector<int> a,b,c,d;
    a=dots[0], b=dots[1], c=dots[2], d=dots[3];
    if((a[1]-b[1])*(c[0]-d[0]) == (c[1]-d[1])*(a[0]-b[0]))  return 1;
    if((a[1]-c[1])*(b[0]-d[0]) == (b[1]-d[1])*(a[0]-c[0]))  return 1;
    if((a[1]-d[1])*(b[0]-c[0]) == (b[1]-c[1])*(a[0]-d[0]))  return 1;
    
    return 0;
}


// if((a[1]-b[1])/(a[0]-b[0]) == (c[1]-d[1])/(c[0]-d[0]))  return 1;
// 위와 같이 풀었는데 정수 나눗셈 문제와 0으로 나눌 수 있는 경우 발생으로 
// 나누기를 곱하기로 대체