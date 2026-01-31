function solution(order) {
  let arr = String(order).split("");
  let answer = 0;

  for (let num of arr) {
    if (num === "3" || num === "6" || num === "9") answer++;
  }

  return answer;
}

// O(n)
// 숫자를 그냥 문자열로 바꿔버리고 배열로 변환하여 3, 6, 9를 비교한다.

// 이런 방식으로도 사용 가능
// 정규화를 통해 369에 해당하는 문자열을 추가하고, 총 문자열의 길이를 반환
// return (String(order).match(/[369]/g) || []).length;
