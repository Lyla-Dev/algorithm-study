function solution(bridge_length, weight, truck_weights) {
  let totalWeight = 0;
  let sec = 0;
  const bridge = Array(bridge_length).fill(0);

  // 다리 위에 올라가지 않은 트럭의 개수와 다리 위에 올라가있는 트럭의 총 무게의 합으로 반복문을 돌린다.
  while (truck_weights.length > 0 || totalWeight > 0) {
    sec++;

    const out = bridge.shift();
    const enter = truck_weights[0];
    totalWeight -= out;

    // 다리 위에 올라가지 않은 트럭이 존재할 때,
    if (truck_weights.length > 0) {
      // 더이상 진입이 불가한 경우 0 넣기(큐)
      if (totalWeight + enter > weight) {
        bridge.push(0);
      } else {
        // 새로운 트럭 진입
        bridge.push(enter);
        totalWeight += enter;
        truck_weights.shift();
      }
    }
  }

  return sec;
}

// O(n)
