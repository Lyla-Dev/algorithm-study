#include <string>
#include <vector>

using namespace std;

int solution(int balls, int share) {
    long answer = 1;
    for(int i = 1; i<=share; i++){
        answer = answer*(balls-i+1)/i;
    }
    return static_cast<int>(answer);
}


// 자료형의 범위와 연산자 우선순위까지 고려해야 하는 문제였음.
// nCr = n!/((n-m)!*m!)
// 5C3 = 5!/(2!*3!) = (5*4*3*2*1)/(2*1*3!) = (5*4*3)/3! 
// => 분모: n부터 1씩 감소하면서 r개의 수의 곱
// => 분자: r!

// answer *= a / b       => answer = answer * ( a / b ) 으로 동작.  