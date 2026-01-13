function solution(numbers, num1, num2) {
  return numbers.slice(num1, num2 + 1);
}
// slice는 첫번째 파라미터 이상, 두번째 파라미터 미만의 배열 값을 슬라이스한다.
// O(n)
