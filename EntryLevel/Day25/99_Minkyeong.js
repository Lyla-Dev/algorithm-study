function solution(num, total) {
  const answer = [];
  let k = (2 * total + num - num * num) / (2 * num);
  return Array.from({ length: num }, (_, i) => i + k);
}

// O(n)
// 등차수열의 합으로 k를 구한다. -> O(1)
// Array.from에서 첫번째 인자는 길이, 두번째 인자는 콜백함수
// 콜백함수의 파라미터로 첫번째는 현재 값, 두번째는 인덱스이며, 현재 값이 없으므로 _로 표기
