function solution(balls, share) {
  let k = Math.min(share, balls - share);
  let result = 1;

  for (let i = 1; i <= k; i++) {
    result = (result * (balls - i + 1)) / i;
  }

  return result;
}

// O(n)
// min() 함수를 이용하여 k값을 최적화한다.
