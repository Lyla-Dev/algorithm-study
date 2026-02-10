// function solution(A, B) {
//     for(let i = A.length; i > 0; i--) {
//         if (B === (A.slice(i) + A.slice(0, i))) return A.length - i;
//     }
//     return -1;
// }

function solution(A, B) {
  return (B + B).indexOf(A);
}

// O(n)
// B를 두 번 이어붙인 문자열에서 A가 시작하는 인덱스를 찾으면 됨.
// 직접 한 칸씩 밀어보는 것보다 훨씬 경제적임
