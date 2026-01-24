function solution(n) {
  let sum = 0;

  while (n > 0) {
    sum += n % 10;
    n = Math.floor(n / 10);
  }

  return sum;
}

// O(logn)
// 숫자를 문자열로 변환하면 공간 복잡도가 증가하기 때문에 숫자 연산이 조금 더 유리함.
