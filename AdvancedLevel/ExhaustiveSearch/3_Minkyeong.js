// 수의 모든 조합 구하기
// 재귀함수를 이용
// 현재까지 만들어진 수 + 남은 수의 조합
function combination(current, remaining, result) {
  if (current.length > 0) {
    result.add(Number(current));
  }

  if (remaining.length === 0) {
    return;
  }

  for (let i = 0; i < remaining.length; i++) {
    const nextNum = remaining[i];
    const nextRemaining = remaining.slice(0, i) + remaining.slice(i + 1);
    combination(current + nextNum, nextRemaining, result);
  }
}

// 소수 판별
// 수의 개수가 많지 않기 때문에 하나하나 나눗셈 진행
function isPrime(number) {
  if (number < 2) return false;
  for (let i = 2; i * i <= number; i++) {
    if (number % i === 0) return false;
  }
  return true;
}

function solution(numbers) {
  const list = new Set();
  let answer = 0;
  combination("", numbers, list);

  for (let num of list) {
    if (isPrime(num)) answer++;
  }

  return answer;
}

// O(n)