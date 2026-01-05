#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    sort(array.begin(), array.end());
    return array[array.size() / 2];
}

// algorithm 헤더에 포함되어 있는 sort() 함수로 벡터를 오름차순으로 정렬