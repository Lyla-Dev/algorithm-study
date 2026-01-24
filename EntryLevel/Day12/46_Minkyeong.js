function solution(my_string) {
  return my_string
    .match(/\d/g)
    .map(Number)
    .sort((a, b) => a - b);
}

// O(n log n)
// map에서 다음과 같이 함수만 표기하면 모든 원소에 적용된 새 배열을 반환한다.
// 정규표현식에서 \d는 숫자를 의미한다. 그래서 match 줄은 숫자 배열을 반환한다는 의미.
