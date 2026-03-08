function solution(distance, rocks, n) {
  // 돌은 최대 50000개이므로 sort 이용
  rocks.sort((a, b) => a - b);

  let left = 1;
  let right = distance;
  let answer = 0;

  // 이분탐색 기준 = 돌 사이의 최소 거리
  while (left <= right) {
    let mid = Math.floor((left + right) / 2);
    let removedCount = 0;
    let prev = 0;

    // 돌 사이의 간격을 계산하며 mid보다 작을 때 돌을 제거
    for (let i = 0; i < rocks.length; i++) {
      if (rocks[i] - prev < mid) {
        removedCount++;
      } else {
        prev = rocks[i];
      }
    }

    // 마지막 돌과 도착 지점 사이 거리 계산
    if (distance - prev < mid) removedCount++;

    // 임의로 지정한 mid를 기준으로 제거한 돌의 개수가 n개 이하인 경우
    // left에 mid + 1을 할당
    if (removedCount <= n) {
      answer = mid;
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }

  // 최종 mid 값 반환
  return answer;
}

// O(N * log distance)
