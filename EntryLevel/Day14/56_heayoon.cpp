#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    for(auto& c : my_string){
        if(c>='a' && c<='z'){
            c = toupper(c);
        }
        else{
            c = tolower(c);
        }
    }
    return my_string;
}

// c>='a' && c<='z' 대신 islower(c) 함수 사용 가능