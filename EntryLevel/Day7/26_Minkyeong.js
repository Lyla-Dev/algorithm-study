function solution(angle) {
  if (angle < 90) return 1;
  if (angle === 90) return 2;
  if (angle < 180) return 3;
  return 4;
}

// 굳이 else문을 사용하지 않고 간단하게 표기할 수 있음.
