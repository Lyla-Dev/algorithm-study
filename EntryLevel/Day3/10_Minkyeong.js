function solution(array) {
  array.sort((a, b) => a - b);
  let i = Math.floor(array.length / 2);
  return array[i];
}

// array = [1, 3, 10] 일때
// array.sort() -> [1, 10, 3]
// 즉 문자열 기준으로 정렬됨.

// array.sort((a, b) => a - b)
// 로 사용해서 a가 b보다 클 때만 순서를 바꾸게 하기.
// 내림차순은 반대로 사용하면 됨.

// sort 사용 -> O(n log n)
