function solution(n) {
  const isPrime = Array(n + 1).fill(true);
  isPrime[0] = false;
  isPrime[1] = false;

  for (let i = 2; i * i <= n; i++) {
    if (!isPrime[i]) continue;
    for (let j = i * i; j <= n; j += i) {
      isPrime[j] = false;
    }
  }

  let primeCnt = 0;
  for (let i = 2; i <= n; i++) {
    if (isPrime[i]) primeCnt++;
  }

  return n - 1 - primeCnt;
}

// 에라토스테네스의 체
// O(n log log n)
// n의 약수는 제곱근해서 n이 되는 수까지만 확인하면 되는 특성을 이용한다.
