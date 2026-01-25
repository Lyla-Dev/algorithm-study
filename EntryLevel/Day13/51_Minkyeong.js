function solution(my_string) {
  let result = new Set(my_string.split(""));

  return Array.from(result).join("");
}

// O(n)
// set은 중복을 허용하지 않고, 들어온 순서대로 유지됨
// Array.from()으로 set을 배열로 바꿔줌.
