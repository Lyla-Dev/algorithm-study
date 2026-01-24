function solution(n, numlist) {
  return numlist.filter((num) => num % n === 0);
}

// O(n)
// 배열에서 특정 조건에 맞는 요소들만 추출할 때는 filter 함수 사용하기!
