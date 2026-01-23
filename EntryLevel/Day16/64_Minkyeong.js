// function solution(s1, s2) {
//     let cnt = 0;

//     for (let str1 of s1) {
//         for (let str2 of s2) {
//             if (str1 === str2) cnt++;
//         }
//     }

//     return cnt;
// }

function solution(s1, s2) {
  let set2 = new Set(s2);
  return s1.filter((str) => set2.has(str)).length;
}

// O(n)
// 처음에는 이중 for문을 사용하였지만, 이후 데이터가 커지면 비효율적임
// Set은 해시테이블을 사용하여 특정 값을 찾는 시간이 O(1)이기 때문에 더 효율적임.
// 따라서 set에서 특정 값을 찾아 true이면 새로운 배열에 저장하는 방식으로 답을 구함

// 배열 vs 해시테이블
// 배열: 특정 값을 찾기 위해서 처음부터 끝까지 순회해야 함 -> O(n)
// 해시테이블: 키 값을 통해 특정 값을 빠르게 찾을 수 있음 -> O(1)
// 이때 해시 함수가 이용됨. 해시 함수는 키 값을 고정된 크기의 해시 코드로 변환하는 함수임.
// 해시 코드를 통해 해시테이블에서 해당 값을 빠르게 찾을 수 있음.
