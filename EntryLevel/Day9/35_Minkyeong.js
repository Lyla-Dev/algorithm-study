function solution(rsp) {
  const arr = new Map();

  arr.set("2", "0");
  arr.set("0", "5");
  arr.set("5", "2");

  return rsp
    .split("")
    .map((ch) => arr.get(ch))
    .join("");
}

// O(n)
