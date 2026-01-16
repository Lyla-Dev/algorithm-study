function solution(num_list, n) {
  const result = [];

  for (let i = 0; i < num_list.length; i += n) {
    result.push(num_list.slice(i, i + n));
  }

  return result;
}

// O(n)
// 자바스크립트는 2차원 배열을 직접 만들지 못함.
// 그래서 우선 1차원 배열을 생성하고, slice 함수를 이용하여 새 배열을 안에 추가하는 방식으로 접근
