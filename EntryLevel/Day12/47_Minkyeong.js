function solution(my_string) {
  let numbers = my_string.match(/\d/g);
  let answer = 0;

  for (let num of numbers) {
    answer += Number(num);
  }

  return answer;
}

// O(n)
// 만약 숫자가 최소 1개라는 조건이 없으면 match 결과가 null일 수 있으므로 예외처리 필요.
// match로 뽑은 숫자는 문자열이기 때문에 숫자 자료형으로 변환 필요
