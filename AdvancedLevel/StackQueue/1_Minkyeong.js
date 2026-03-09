function solution(arr) {
  return arr.filter((val, index) => val !== arr[index + 1]);
}

// O(n)
// 현재 값이 다음 값과 다른 경우에만 값을 남긴다.
