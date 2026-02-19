function solution(polynomial) {
  let xCount = 0;
  let constant = 0;

  const terms = polynomial.split(" ");

  for (const term of terms) {
    if (term === "+") continue;

    if (term.includes("x")) {
      const coef = term.replace("x", "");
      xCount += coef === "" ? 1 : Number(coef);
    } else {
      constant += Number(term);
    }
  }

  const result = [];
  if (xCount > 0) result.push(xCount === 1 ? "x" : `${xCount}x`);
  if (constant > 0) result.push(constant);

  return result.join(" + ");
}

// O(n)
// 문자열 순회를 최소화 할 수 있게 코드 작성하기
// replace 함수로 불필요한 문자 삭제 가능
