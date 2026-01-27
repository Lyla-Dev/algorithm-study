function solution(n) {
  const sqrt = Math.sqrt(n);

  return Number.isInteger(sqrt) ? 1 : 2;
}

// O(1)
// 제곱근이 정수인지 판별하여 제곱수 여부를 결정한다.
