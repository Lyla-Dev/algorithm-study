function solution(num1, num2) {
  if (num2 === 0) {
    return -1;
  }

  return Math.floor(num1 / num2);
}

// JavaScript는 나눗셈 시 자동으로 실수 연산
// 그래서 Math.floor() 함수 사용해야함.
// 형 변환이 자유로워서, 비교를 ==로 하면 에러 발생 가능성 있음.
// ex. "0"== true -> true
// 그래서 형 변환 없는 === 사용.
