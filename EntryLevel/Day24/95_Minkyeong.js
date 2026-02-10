function solution(before, after) {
  return before.split("").sort().join("") === after.split("").sort().join("")
    ? 1
    : 0;
}

// O(n log n)
// 배열은 서로 같은지 비교할 수 없다.
// 비교 시 주소값을 비교하기 때문에 false를 반환.
