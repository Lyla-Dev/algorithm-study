function solution(s) {
  const cnt = new Map();
  const answer = [];

  for (let letter of s) {
    cnt.set(letter, (cnt.get(letter) ?? 0) + 1);
  }

  for (const [ch, c] of cnt) {
    if (c === 1) {
      answer.push(ch);
    }
  }

  return answer.sort().join("");
}

// O(n log n)
// Map은 for of로 순회 가능. [ch, c] 형태로 구조분해할당 사용
