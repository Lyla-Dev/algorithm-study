function solution(numbers) {
  let total = 0;

  for (let val of numbers) {
    total += val;
  }
  return total / numbers.length;
}
