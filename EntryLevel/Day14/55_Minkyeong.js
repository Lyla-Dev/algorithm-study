function solution(cipher, code) {
  let answer = "";

  for (let i = code - 1; i < cipher.length; i += code) {
    answer += cipher[i];
  }

  return answer;
}

// O(n)
// String은 읽는 작업에서 인덱스를 활용할 수 있다.
