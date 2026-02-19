function solution(score) {
  const average = score.map((s) => s[0] + s[1]);
  const sorted = [...average].sort((a, b) => b - a);
  return average.map((r) => sorted.indexOf(r) + 1);
}

// O(N log N)
// indexOf는 첫번째 값의 인덱스를 반환하기 때문에 동점자처리가 가능함.
