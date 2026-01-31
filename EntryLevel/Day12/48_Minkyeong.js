function solution(n) {
  let divider = new Set();
  let i = 2;

  while (n >= i) {
    while (n % i === 0) {
      divider.add(i);
      n /= i;
    }
    i++;
  }

  return [...divider];
}

// O(n)
// 같은 숫자로 나뉠때까지 나누고 다음으로 넘어감.
