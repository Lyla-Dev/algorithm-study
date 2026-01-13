function solution(n) {
  let cnt = 0;

  for (let i = 0; i * i <= n; i++) {
    if (n % i === 0) {
      const j = n / i;
      if (j === i) cnt += 1;
      else cnt += 2;
    }
  }

  return cnt;
}

// 결론적으로 n의 약수를 구해야하는데,
// 약수는 n의 제곱근까지만 확인하면 모두 구할 수 있음.
// 그래서 for문을 i * i <= n로 설정
