function solution(age) {
  const alphabet = ["a", "b", "c", "d", "e", "f", "g", "h", "i", "j"];

  return String(age)
    .split("")
    .map((ch) => alphabet[Number(ch)])
    .join("");
}

// 숫자 -> 문자열 시 String() 사용
// 문자열 -> 숫자 시 Number() 사용
// O(1)
