function solution(numbers) {
  let answer = numbers
    .map(String)
    .sort((a, b) => {
      return a + b > b + a ? -1 : 1;
    })
    .join("");

  if (answer[0] === "0") return "0";
  return answer;
}

// O(n log n)
// 숫자를 직접 문자열로 바꿔 붙여보며 어떤게 더 큰지 비교한다.
// 모두 0인 케이스 예외 처리
