function solution(a, b) {
  const getGCD = (a, b) => (b === 0 ? a : getGCD(b, a % b));

  let newB = b / getGCD(a, b);

  while (newB % 2 === 0) newB /= 2;
  while (newB % 5 === 0) newB /= 5;

  return newB === 1 ? 1 : 2;
}

// O(log N)
// 최대공약수를 이용해 기약분수로 만든 후, 분모가 2와 5만으로 이루어져 있는지 확인.
