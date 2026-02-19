#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    auto l = numbers.size();
    sort(numbers.begin(), numbers.end());
    return max(numbers[0]*numbers[1], numbers[l-1]*numbers[l-2]);
}