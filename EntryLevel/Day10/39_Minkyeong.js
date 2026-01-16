function solution(numbers, k) {
  let index = 0;
  index = (index + (k - 1) * 2) % numbers.length;
  return numbers[index];
}

// O(1)
