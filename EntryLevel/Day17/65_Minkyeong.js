function solution(num, k) {
  let answer = String(num).indexOf(String(k));
  return answer === -1 ? -1 : answer + 1;
}

// O(n)
// 특정 문자가 어디에 있는지 확인할 때는 indexOf 함수 사용하기!
// indexOf 함수는 찾고자 하는 문자가 없을 경우 -1 반환
