function solution(clothes) {
  const closet = new Map();
  let answer = 1;

  for (let [c, sort] of clothes) {
    closet.set(sort, (closet.get(sort) ?? 0) + 1);
  }
  for (let [key, val] of closet) {
    answer *= val + 1;
  }

  return answer - 1;
}

// O(n)
