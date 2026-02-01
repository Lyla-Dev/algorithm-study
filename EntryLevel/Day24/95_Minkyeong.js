function solution(i, j, k) {
  let str = "";

  for (let start = i; start <= j; start++) {
    str += start;
  }

  return str.split("").filter((ch) => ch === String(k)).length;
}

// O(n)
// 범위 내에 있는 숫자를 모두 하나의 문자열로 합친 후 특정 숫자의 개수를 세기
