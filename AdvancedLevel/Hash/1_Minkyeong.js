function solution(participant, completion) {
  const hash = new Map();

  for (const name of participant) {
    hash.set(name, (hash.get(name) || 0) + 1);
  }

  for (const name of completion) {
    hash.set(name, hash.get(name) - 1);
  }

  for (const [name, count] of hash) {
    if (count > 0) return name;
  }
}
// O(n)
