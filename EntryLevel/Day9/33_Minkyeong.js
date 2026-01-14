function solution(hp) {
  let general = 0;
  let soldier = 0;
  let worker = 0;

  general = Math.floor(hp / 5);
  hp %= 5;

  soldier = Math.floor(hp / 3);
  hp %= 3;

  worker = hp;

  return general + soldier + worker;
}

// O(1)
// 그리디 알고리즘
// 최대한 큰 단위로 나누는 것이 최소 개수로 나누는 방법
