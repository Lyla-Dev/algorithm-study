#include <numeric>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    double sum = accumulate(numbers.begin(),numbers.end(),0);
    return sum/numbers.size();
}