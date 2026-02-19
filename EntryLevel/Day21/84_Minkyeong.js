function solution(spell, dic) {
  const str = spell.sort().join("");
  return dic.some((word) => word.split("").sort().join("") === str) ? 1 : 2;
}

// O(n log n)
// some은 배열의 요소 중 하나라도 조건을 만족하면 true를 반환한다.
