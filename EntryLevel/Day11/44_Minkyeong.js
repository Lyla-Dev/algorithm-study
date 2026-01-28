function solution(n) {
  let answer = 0;
  let total = 1;

  while (total <= n) {
    answer++;
    total = total * answer;
  }

  return answer - 1;
}
