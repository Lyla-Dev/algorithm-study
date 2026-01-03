function solution(numer1, denom1, numer2, denom2) {
  var numer = 0;
  var denom = 0;

  numer = numer1 * denom2 + numer2 * denom1;
  denom = denom1 * denom2;

  // 최대공약수 구하기
  // 유클리드 호제법 사용
  const gcd = (a, b) => {
    while (b !== 0) {
      const temp = a % b;
      a = b;
      b = temp;
    }
    return a;
  };

  const g = gcd(numer, denom);
  numer = numer / g;
  denom = denom / g;

  return [numer, denom];
}

// 일반적인 함수 선언
// function gcd(a, b) {
// }

// 변수로 함수 선언
// const gcd = (a, b) => {
// }
// gcd라는 변수를 선언하고, 변수에 함수 자체를 값으로 저장.
// 함수는 다시 바꾸지 않는 값이어서 const로 선언하는 것이 좋음.
// let과 다르게 const는 재할당이 안됨.
