function solution(keyinput, board) {
  const answer = [0, 0];

  const rangeX = Math.floor(board[0] / 2);
  const rangeY = Math.floor(board[1] / 2);

  for (let input of keyinput) {
    switch (input) {
      case "up":
        if (answer[1] < rangeY) answer[1] += 1;
        break;
      case "down":
        if (answer[1] > -rangeY) answer[1] -= 1;
        break;
      case "left":
        if (answer[0] > -rangeX) answer[0] -= 1;
        break;
      case "right":
        if (answer[0] < rangeX) answer[0] += 1;
        break;
    }
  }

  return answer;
}

// O(n)
// 범위를 미리 지정하여 코드 복잡도 개선
