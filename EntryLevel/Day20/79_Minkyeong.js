function solution(numbers) {
  numbers.sort((a, b) => a - b);

  const max1 = numbers[0] * numbers[1];
  const max2 = numbers[numbers.length - 2] * numbers[numbers.length - 1];

  return max1 > max2 ? max1 : max2;
}

// O(n log n)
// 배열을 오름차순으로 정렬
// 1. 가장 작은 수 2개 곱한 값(음수 * 음수에 대비)
// 2. 가장 큰 수 2개 곱한 값
// 둘 중 더 큰 값을 반환
