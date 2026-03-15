function solution(n, times) {
  let min = Math.min(...times);
  let max = n * Math.max(...times);
  let answer = 0;

  // 이분탐색으로 최소 시간 탐색
  // mid 시간을 잡고, mid 시간 동안 심사관들이 심사할 수 있는 사람 수 계산
  // => 처리한 사람의 수에 따라 min, max 조정
  while (min <= max) {
    let people = 0;
    let mid = Math.floor((min + max) / 2);

    for (let i = 0; i < times.length; i++) {
      people += Math.floor(mid / times[i]);
    }

    if (n <= people) {
      answer = mid;
      max = mid - 1;
    } else {
      min = mid + 1;
    }
  }

  return answer;
}

// O(M×log(Range))
