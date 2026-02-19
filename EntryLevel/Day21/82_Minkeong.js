function solution(board) {
  const n = board.length;
  const danger = Array.from({ length: n }, () => Array(n).fill(0));

  const x = [-1, -1, -1, 0, 0, 1, 1, 1];
  const y = [-1, 0, 1, 1, -1, 1, 0, -1];

  for (let i = 0; i < n; i++) {
    for (let j = 0; j < n; j++) {
      if (board[i][j] === 1) {
        danger[i][j] = 1;
        for (let k = 0; k < 8; k++) {
          const dx = i + x[k];
          const dy = j + y[k];
          if (dx >= 0 && dy >= 0 && dx < n && dy < n) danger[dx][dy] = 1;
        }
      }
    }
  }

  return danger.reduce(
    (total, row) => total + row.filter((num) => num === 0).length,
    0
  );
}

// O(n^2)
// 8방향을 나타내는 x, y 배열을 만들어서 지뢰를 기준으로 주변 칸을 변경
// Array.from으로 2차원 배열을 생성하기 위해 Array(n).fill(0)을 사용
// reduce와 filter를 사용해 0의 개수를 세서 반환
