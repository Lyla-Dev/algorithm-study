function solution(dots) {
  const tempX = new Set();
  const tempY = new Set();

  for (let [x, y] of dots) {
    tempX.add(x);
    tempY.add(y);
  }

  // set 원소 추출
  const [x1, x2] = [...tempX];
  const [y1, y2] = [...tempY];

  return Math.abs((x2 - x1) * (y2 - y1));
}

// O(1)
