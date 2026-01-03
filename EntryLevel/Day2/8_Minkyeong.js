function solution(numbers) {
  var answer = [];

  for (let i = 0; i < numbers.length; i++) {
    answer[i] = numbers[i] * 2;
  }

  return answer;
}

// for: 값을 순회하며 인덱스에 접근할 때 유리
// for of: 값만 필요할 때 유리, 배열, 문자열, Map, Set 모두 가능
