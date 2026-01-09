#include <string>
#include <vector>

using namespace std;
int get_gcd(int a, int b) {
    while (b) {
        a = a % b;
        swap(a, b);
    }
    return a;
}
vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    int numer = numer1 * denom2 + numer2 * denom1;
    int denom = denom1 * denom2;
    int gcd = get_gcd(numer, denom);
    vector<int> answer = { numer / gcd, denom / gcd };
    return answer;
}