function solution(my_string) {
  const arr = my_string.match(/\d+/g);

  return arr ? arr.reduce((a, b) => a + Number(b), 0) : 0;
}

// O(n)
// \d+ 는 연속된 숫자라는 의미.
// reduce는 배열의 각 요소를 순회하며 하나의 최종 결과값을 만들어낸다.
// 선언적인 특성을 가져서 의도가 명확하고, 외부 변수 없이 한 줄로 처리가 가능하다.
// 데이터 불변성을 유지할 때 매우 유리함.
// reduce((누적값, 현재값) => 리턴값, 초기값)
