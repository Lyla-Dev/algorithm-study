function solution(dots) {
  const getSlope = (p1, p2) => (p2[1] - p1[1]) / (p2[0] - p1[0]);

  const [a, b, c, d] = dots;

  if (getSlope(a, b) === getSlope(c, d)) return 1;
  if (getSlope(a, c) === getSlope(b, d)) return 1;
  if (getSlope(a, d) === getSlope(b, c)) return 1;

  return 0;
}

// O(1)
// 선을 연결할 수 있는 조합 별로 기울기 구하기.
