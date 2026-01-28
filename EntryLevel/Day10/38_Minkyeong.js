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

// 자바스크립트는 2차원 배열을 처음부터 정의하지 못함!
// 우선, js는 배열이 실제로 저장될 때 객체로 저장됨.
// 그리고 JS는 `let a = []; a[0] = 1; a[1000] = 5;`과 같은 동적 언어인데,
// int arr[3][4]; 이런식의 정적 선언은 언어의 특성과 맞지 않음.
