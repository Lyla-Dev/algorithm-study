#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {
    sort(phone_book.begin(), phone_book.end());
    
    for(int i=0; i<phone_book.size()-1; i++){
        if(phone_book[i+1].find(phone_book[i])==0){
            return false;
        }
    }
    
    return true;
}

// if(phone_book[i+1].find(phone_book[i])==0)
    // s1.find(s2)                  // O(N × M)
// if(phone_book[i+1].compare(0, phone_book[i].size(), phone_book[i])==0)
    // s1.compare(pos, len, s2)     // O(M)
// if(phone_book[i+1].substr(0, phone_book[i].size())==phone_book[i])
    // s1.substr(pos, len)          // O(M) 문자열 복사 발생