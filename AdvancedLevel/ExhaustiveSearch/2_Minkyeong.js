function solution(answers) {
  const p1 = [1, 2, 3, 4, 5];
  const p2 = [2, 1, 2, 3, 2, 4, 2, 5];
  const p3 = [3, 3, 1, 1, 2, 2, 4, 4, 5, 5];
  const score = [0, 0, 0];

  for (let i = 0; i < answers.length; i++) {
    if (answers[i] === p1[i % p1.length]) score[0]++;
    if (answers[i] === p2[i % p2.length]) score[1]++;
    if (answers[i] === p3[i % p3.length]) score[2]++;
  }

  const max = Math.max(...score);
  return score.reduce((arr, val, idx) => {
    if (val === max) arr.push(idx + 1);
    return arr;
  }, []);
}
// O(n)
// 직접 규칙을 const로 정의해서 사용
// answer와 비교해보며 점수를 올린다.
