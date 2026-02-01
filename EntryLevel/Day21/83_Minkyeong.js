function solution(sides) {
  const min = Math.min(...sides);

  return min * 2 - 1;
}

// O(1)
// [a, b]에서 가장 긴 변이 b인 경우
// a + n > b, n <= b
// [a, b]에서 가장 긴 변이 n인 경우
// a + b > n, b <= n

// b - a < n < a + b
// n의 개수는 (a + b - 1) - (b - a) = 2a - 1
