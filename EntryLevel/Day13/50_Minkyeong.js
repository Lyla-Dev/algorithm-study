function solution(strlist) {
  let answer = [];

  for (let str of strlist) {
    answer.push(str.length);
  }

  return answer;
}

// O(n)

function solution2(strlist) {
  return strlist.map((str) => str.length);
}
// 이렇게 맵으로도 해결 가능. 더 간단함..
