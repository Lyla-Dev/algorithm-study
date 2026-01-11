// 처음 풀이
// 가능하지만 가독성 떨어지고 시간복잡도 증가
// function solution(my_string, n) {
//   let answer = "";

//   for (let letter of my_string) {
//     answer += letter.repeat(n);
//   }
//   return answer;
// }

function solution(my_string, n) {
  return my_string
    .split("")
    .map((ch) => ch.repeat(n))
    .join("");
}

// map은 배열에서만 사용 가능
// 각 배열의 요소를 하나씩 바꿔서 새로운 배열을 만듦
// map((기존) => (바꿀 값))
