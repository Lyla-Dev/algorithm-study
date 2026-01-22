function solution(n) {
  const answer = new Set();

  for (let i = 1; i * i <= n; i++) {
    if (n % i === 0) {
      answer.add(i);
      answer.add(n / i);
    }
  }

  return Array.from(answer).sort((a, b) => a - b);
}

// O(√n)
// 약수는 n의 제곱근까지만 확인하면 됨
// 약수를 Set에 저장하여 중복 제거
