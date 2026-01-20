function solution(n) {
  let sum = 0;

  for (let i = 2; i <= n; i += 2) {
    sum += i;
  }

  return sum;
}
// 원래 for문에 i+=2가 아니라 i+2로 했었는데, 이렇게 하면 값만 계산하고 실제 i값이 변하지 않음.
// 그래서 무한루프에 빠지게 됨. 주의!
