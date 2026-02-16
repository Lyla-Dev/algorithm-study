function solution2(array) {
  const maxNum = Math.max(...array);
  const maxIndex = array.indexOf(maxNum);
  return [maxNum, maxIndex];
}

// O(n)
