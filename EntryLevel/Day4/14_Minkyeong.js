function solution(n) {
  const gcd = (a, b) => {
    const temp = 0;

    while (b !== 0) {
      temp = a % b;
      a = b;
      b = temp;
    }
    return a;
  };

  return n / gcd(n, 6);
}

// 최소공배수 문제 (유클리드 호제법 활용)
