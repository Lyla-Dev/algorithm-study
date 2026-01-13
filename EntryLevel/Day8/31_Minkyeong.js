// O(n log n)
function solution(emergency) {
  const sorted = [...emergency].sort((a, b) => b - a);
  const rank = new Map();

  sorted.forEach((v, i) => rank.set(v, i + 1));
  return emergency.map((v) => rank.get(v));
}
// 배열을 복사하는 경우[...emergency]처럼 사용해야 값을 복사 가능.
// const sorted = emergency라고 하면 주소만 복사하게 됨.

// 배열에는 .forEach, .map 등을 사용할 수 있음
// forEach: 반환값이 없고, 리스트를 돌면서 작업을 수행. 파라미터1은 값, 파라미터2는 인덱스를 의미
// map: 반환값이 있음, 리스트를 돌면서 값을 변환하여 새로운 배열을 만듦

// 객체 vs Map
// 1. 객체: 속성의 묶음
// const person = {
//  name: "Alice",
// age: 30 };
// 문법이 간단하지만, key 타입이 모두 문자열로 변환되기 때문에 '1'과 1을 구별하지 못함

// 2. Map: key-value 쌍의 집합
// const map = new Map();
// key 타입을 구별할 수 있음. 다양한 타입의 key 사용 가능
// key, value를 매핑하는 경우 Map이 더 적합

// 처음 풀이
// O(n^2)

// function solution(emergency) {
//     var answer = [];
//     let original = [...emergency];

//     emergency.sort((a, b) => b - a);

//     for(let i = 0; i < original.length; i++) {
//         answer[i] = emergency.indexOf(original[i]) + 1;
//     }
//     return answer;
// }
