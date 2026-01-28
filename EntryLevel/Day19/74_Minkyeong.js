function solution(my_str, n) {
  const answer = [];

  for (let i = 0; i < my_str.length; i += n) {
    answer.push(my_str.slice(i, i + n));
  }

  return answer;
}

// O(n)
// javascript의 slice는 배열의 범위를 넘어가도 자동으로 잘라서 반환
