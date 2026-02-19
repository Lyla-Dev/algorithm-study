function solution(n) {
  let cnt = 0;

  for (let i = 1; i <= n; i++) {
    cnt++;
    while (String(cnt).includes("3") || cnt % 3 === 0) {
      cnt++;
    }
  }

  return cnt;
}

// O(n)
// 1부터 차례로 세면서 제한 조건에 걸리면 1을 더한다.
// while문은 제한 조건에 걸리지 않을 때까지 반복.
