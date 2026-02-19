function solution(array) {
  return array.join("").split("7").length - 1;
}

// O(n)
// 배열을 합친 후 7을 기준으로 다시 배열을 나눠서 생성.
// 자바스크립트에서 특정 문자의 개수를 셀 때 자주 쓴다.
