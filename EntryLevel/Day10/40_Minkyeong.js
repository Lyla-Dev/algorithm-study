function solution(numbers, direction) {
  if (direction === "left") {
    return [...numbers.slice(1), numbers[0]];
  }
  return [numbers[numbers.length - 1], ...numbers.slice(0, -1)];
}

// O(n)
// 아래 코드와 달리 배열의 불변성을 유지한다.
// slice에 파라미터가 한 개만 들어가있으면 start부터 끝까지를 의미
// ...는 스프레드 연산자로, 배열을 풀어서 하나씩 꺼낸다.

// function solution1(numbers, direction) {
//   let temp;

//   switch (direction) {
//     case "left":
//       temp = numbers.shift();
//       numbers.push(temp);
//       break;
//     case "right":
//       temp = numbers.pop();
//       numbers.unshift(temp);
//       break;
//   }

//   return numbers;
// }
// push: 배열의 가장 끝에 값을 추가
// pop: 배열의 가장 끝 값을 제거
// shift: 배열의 맨 앞 값을 제거
// unshift: 배열의 맨 앞에 값을 추가
