function solution(num_list) {
  let answer = { even: 0, odd: 0 };

  for (let num of num_list) {
    if (num % 2 === 0) {
      answer.even++;
      continue;
    }
    answer.odd++;
  }
  return [answer.even, answer.odd];
}

// 짝수와 홀수의 개수를 배열로 정의하는 것이 아닌 객체로 정의
// 객체로 정의함으로써 명확하게 even, odd를 구분할 수 있음.
