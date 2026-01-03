function solution(num1, num2) {
  return Math.floor((num1 / num2) * 1000);
}

// 불필요한 변수 만들지 않기
// ParseInt 대신 Math.floor 사용하기
// ParseInt는 문자열을 정수로 변환하는 함수이기 때문에 예상치 못한 변수가 발생할 수 있음.
