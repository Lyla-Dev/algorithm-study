// 처음 쓴 코드
// 문제점: 인덱스로 식을 표현하여 협업 시 가독성 떨어짐.
// 또한, 굳이 result 배열을 만들어서 결과를 담고 있음. 그냥 기존 배열을 O 또는 X로 대치하는 것이 효율적임.
function solution1(quiz) {
  const result = [];

  for (let str of quiz) {
    const equation = str.split(" ");
    let answer = 0;
    if (equation[1] === "+") answer = Number(equation[0]) + Number(equation[2]);
    if (equation[1] === "-") answer = Number(equation[0]) - Number(equation[2]);
    if (equation[4] === String(answer)) result.push("O");
    else result.push("X");
  }

  return result;
}

// 개선된 코드
// O(n)
// map의 본질은 결국 배열의 값을 어떤 특정 값으로 1:1 대응 시키는 것.
function solution(quiz) {
  return quiz.map((equation) => {
    // 구조 분해 할당으로 split한 값을 바로 변수에 할당
    const [val1, op, val2, eq, result] = equation.split(" ");

    // 변수 앞에 붙은 +는 문자열을 숫자로 변환하는 역할
    // 연산자에 따라 덧셈 또는 뺄셈 수행
    const answer = op === "+" ? +val1 + +val2 : +val1 - +val2;

    // 연산 결과와 주어진 결과를 비교하여 최종 값 반환
    return answer === +result ? "O" : "X";
  });
}
