function solution(priorities, location) {
  // queue에 우선순위와 타겟 여부를 객체 리터럴 배열 형태로 저장
  let queue = priorities.map((priority, idx) => ({
    priority,
    isTarget: idx === location,
  }));

  // 현재 실행된 프로세스 개수
  let order = 0;

  // 큐에서 프로세스가 모두 실행되어 없어질 때까지 반복
  while (queue.length > 0) {
    const first = queue.shift();

    // 큐에서 우선순위가 더 높은 것이 존재하면 true 반환
    if (queue.some((p) => p.priority > first.priority)) queue.push(first);
    else {
      order++;
      if (first.isTarget) return order;
    }
  }
}

// O(n^2)
