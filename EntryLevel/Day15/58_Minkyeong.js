function solution(my_string, num1, num2) {
  if (num1 > num2) {
    let temp = num2;
    num2 = num1;
    num1 = temp;
  }

  const letter1 = my_string[num1];
  const letter2 = my_string[num2];

  return (
    my_string.slice(0, num1) +
    letter2 +
    my_string.slice(num1 + 1, num2) +
    letter1 +
    my_string.slice(num2 + 1)
  );
}
// 문자열은 immutable이라서 slice로 새로 조립해야함.

function solution(my_string, num1, num2) {
  const arr = my_string.split("");
  [arr[num2], arr[num1]] = [arr[num1], arr[num2]];
  return arr.join("");
}
// 더 간단하게 swap으로 표현 가능.
// 둘다 O(n)
