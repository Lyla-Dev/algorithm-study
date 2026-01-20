function solution(my_string) {
  return my_string.replace(/a|e|i|o|u/g, "");
}

function solution2(my_string) {
  return my_string.replace(/[aeiou]/g, "");
}

// O(n)
// 정규표현식 사용
// 대괄호, 파이프 모두 사용 가능
// replace는 원본 문자열을 보존하고 새로운 문자열을 반환한다.
