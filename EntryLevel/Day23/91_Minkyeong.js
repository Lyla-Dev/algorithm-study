function solution(babbling) {
  let cnt = 0;
  const words = ["aya", "ye", "woo", "ma"];

  for (let s of babbling) {
    let temp = s;

    for (let word of words) {
      temp = temp.split(word).join(" ");
    }
    if (temp.trim() === "") cnt++;
  }

  return cnt;
}

// O(N * M)
// split으로 특정 단어를 스페이스로 바꾼다.
// 최종 문자열을 trim했을 때
// 최종적으로 공백만 남아있는 경우에 카운트를 한다.
