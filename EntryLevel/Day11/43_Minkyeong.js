function solution(numbers) {
  let arr = numbers.sort((a, b) => a - b).slice(-2);
  return arr[0] * arr[1];
}

// O(n log n)
