function solution(array, height) {
  return array.filter((p) => p > height).length;
}

// O(n)
