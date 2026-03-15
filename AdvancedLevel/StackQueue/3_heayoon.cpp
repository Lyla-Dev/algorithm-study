#include<string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    int count=0;
    for(auto c : s){
        c=='(' ? count++ : count --;
        if(count<0) return false;
    }
    return count==0;
}