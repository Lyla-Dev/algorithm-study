function solution(money) {
  let answer = [];

  answer.push(Math.floor(money / 5500));
  answer.push(money % 5500);

  return answer;
}

// 여러분이라면
// 1. let count = Math.floor(money / 5500);
//    answer.push(count);
// 2. answer.push(Math.floor(money / 5500));
// 두 개 중 어떤 방법을 선호하시나요?

// 공간 복잡도 측면에서는 2번 방법이 나은 것 같은데, 가독성은 1번이 좋은 것 같아 항상 쓸 때마다 고민이 돼요.
