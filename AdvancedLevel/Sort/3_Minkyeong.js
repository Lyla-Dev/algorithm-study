function solution(citations) {
  citations.sort((a, b) => a - b);
  const n = citations.length;

  for (let h = n; h > 0; h--) {
    if (citations[n - h] >= h) {
      return h;
    }
  }
  return 0;
}

// O(n log n)
// 오름차순으로 논문 인용 수 정렬 시,
// h값보다 인용수가 크면 조건을 성립하게 됨.
