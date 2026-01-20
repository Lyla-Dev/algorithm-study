function solution(s) {
  const stack = [];

  for (const value of s.split(" ")) {
    if (value === "Z") stack.pop();
    else stack.push(Number(value));
  }

  return stack.reduce((sum, v) => sum + v, 0);
}

// O(n)
// undo, 이전 연산 취소 같은 개념은 스택을 활용하면 좋음.
// reduce는 배열을 하나의 값으로 압축한다.
// reduce(callback 함수, 초기값)
