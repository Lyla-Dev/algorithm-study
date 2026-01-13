function solution(num_list) {
  return num_list.reverse();
}

// function solution(num_list) {
//     for (let i = 0; i < num_list.length / 2 - 1; i++) {
//         let temp = num_list[i];
//         num_list[i] = num_list[num_list.length - i - 1];
//         num_list[num_list.length - i - 1] = temp;
//     }

//     return num_list;
// }

// for문을 끝까지 순회하며 순차적으로 앞으로 보내면 시간이 너무 오래걸림.
// 배열의 절반까지만 순회하며 앞뒤를 바꾸는 방법을 사용

// 근데 더 쉬운 내장 함수가 있었음...
