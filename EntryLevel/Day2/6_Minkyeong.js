function solution(num1, num2) {
  if (num1 === num2) {
    return 1;
  }
  return -1;
}

// function solution(num1, num2) {
//     return (num1 === num2) ? 1 : -1;
// }

// 삼항연산자로도 풀이가능한데, 코드는 더 짧아지지만 가독성은 if 문이 더 좋은 듯?
