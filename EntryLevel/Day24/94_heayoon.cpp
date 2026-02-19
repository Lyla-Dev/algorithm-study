#include <string>
#include <vector>

using namespace std;

string solution(string bin1, string bin2) {
    string answer = "";
    int carry=0, i=bin1.size()-1, j=bin2.size()-1;
    while(i>=0 || j>=0 || carry){
        int a=0, b=0;
        if(i>=0)    a=bin1[i]-'0';
        if(j>=0)    b=bin2[j]-'0';
        
        int sum = a+b+carry;
        if(sum%2==1)    answer="1"+answer; 
        else            answer="0"+answer;  
        
        if(sum<=1)  carry=0;        // sum>=2 이면 carry = 1
        else        carry=1;

        i--; j--;
    }
    return answer;
}

// 문자열의 뒤에서부터(낮은 자릿수부터) 한 글자씩 숫자로 변환하여 더함.
// carry를 사용하여 sum = a + b + carry를 계산하고, sum % 2의 결과를 문자열 앞부분에 붙여나감.