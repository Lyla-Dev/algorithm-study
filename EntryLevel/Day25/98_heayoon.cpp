#include <string>
#include <vector>

using namespace std;

int solution(int M, int N) {
    return (M-1)+M*(N-1);       // 가로로 쭉 자른 수 + 가로로 잘린 종이를 세로로 자른 수
}
// (M-1)+M*(N-1) = M*N-1