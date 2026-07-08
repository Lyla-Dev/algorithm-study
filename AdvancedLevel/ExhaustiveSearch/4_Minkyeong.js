function solution(brown, yellow) {
  let w_h = [];
  for (let i = 1; i * i <= yellow; i++) {
    if (yellow % i === 0) {
      const j = yellow / i;
      if ((j + i) * 2 + 4 === brown) {
        return [j + 2, i + 2];
      }
    }
  }
  return -1;
}

// O(n)
