function solution(lines) {
  const map = new Map();

  for (let arr of lines) {
    for (let i = arr[0]; i < arr[1]; i++) {
      map.set(i, (map.get(i) ?? 0) + 1);
    }
  }

  return [...map.values()].filter((num) => num > 1).length;
}
// O(N)
// 선이 겹치는 구간을 맵에 저장하고, 겹치는 구간의 길이를 반환.
