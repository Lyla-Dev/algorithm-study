function solution(prices) {
  let stack = [];
  let answer = Array(prices.length).fill(0);

  for (let i = 0; i < prices.length; i++) {
    while (prices[i] < prices[stack[stack.length - 1]]) {
      const index = stack.pop();
      answer[index] = i - index;
    }
    stack.push(i);
  }

  while (stack.length !== 0) {
    const index = stack.pop();
    answer[index] = prices.length - index - 1;
  }

  return answer;
}

// O(n)
// 새로운 주식의 인덱스를 스택에 넣기
// 새로운 주식이 스택에 있는 것보다 낮으면 pop하고, 진입 시점과 나간 시점을 비교하여 answer 배열에 담는다.

// prices의 길이 범위가 크기 때문에 이중 반복문 사용을 지양하는게 좋음.
