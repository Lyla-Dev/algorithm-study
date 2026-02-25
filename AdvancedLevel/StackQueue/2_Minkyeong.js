function solution(progresses, speeds) {
  const answer = [];

  // 각 작업이 완료되는데 걸리는 일 수 계산
  const days = progresses.map((p, i) => Math.ceil((100 - p) / speeds[i]));

  // maxDay를 기준으로 소요일을 비교한다.
  let maxDay = days[0];
  let count = 1;

  // maxDay보다 큰 작업이 나타나면 현재까지의 카운트를 push
  // maxDay보다 작은 작업들은 push하지 않고 카운트만 1 더하기
  for (let i = 1; i < days.length; i++) {
    if (days[i] > maxDay) {
      answer.push(count);
      count = 1;
      maxDay = days[i];
    } else {
      count++;
    }
  }

  answer.push(count);

  return answer;
}

// O(n)
