// parseInt로 이진수 덧셈 진행...
// parseInt(string, radix)에서 radix는 string을 읽을 때 사용하는 진법을 의미
// 실제로 컴퓨터가 연산할 때는 10진수로 변환해서 덧셈연산을 진행한다.
// 그러므로 sum은 10진수가 나와서, toString(2)로 다시 2진수 문자열로 변환한다.
function solution(bin1, bin2) {
  const sum = parseInt(bin1, 2) + parseInt(bin2, 2);
  return sum.toString(2);
}
// O(n)

// 전가산기 직접 구현해보기
function solution(bin1, bin2) {
  let carry = 0;
  const answer = [];

  // 두 이진수의 길이를 확인하고 더 큰 쪽에 맞춰 0을 채워줌
  const n = bin2.length - bin1.length;
  if (n < 0) bin2 = bin2.padStart(bin2.length + Math.abs(n), "0");
  else if (n > 0) bin1 = bin1.padStart(bin1.length + n, "0");

  for (let i = bin1.length - 1; i >= 0; i--) {
    const temp = Number(bin1[i]) + Number(bin2[i]) + carry;
    if (temp >= 2) {
      carry = 1;
      answer[i] = temp - 2;
    } else {
      carry = 0;
      answer[i] = temp;
    }
  }

  return carry === 1 ? 1 + answer.join("") : answer.join("");
}
