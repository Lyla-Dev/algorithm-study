function solution(word) {
  const alphabet = ["A", "E", "I", "O", "U"];
  let count = 0;
  let found = false;

  function dictionary(current) {
    if (found) return;

    if (current === word) {
      found = true;
      return;
    }

    if (current.length === 5) return;

    for (let i = 0; i < 5; i++) {
      if (found) return; // for문도 멈추기
      count++;
      dictionary(current + alphabet[i]);
    }
  }

  dictionary("");
  return count;
}

// O(n)
// 재귀 호출로 해당 단어가 나올때까지 조합
