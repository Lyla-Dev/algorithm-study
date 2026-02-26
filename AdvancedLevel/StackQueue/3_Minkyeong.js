function solution(s) {
  const stack = [];

  // 문자열을 순회하며 '('가 ')'를 만날 때 스택에서 pop으로 제거한다.
  // 최종적으로 스택이 비어있으면 true 반환
  for (let i = 0; i < s.length; i++) {
    if (stack.length === 0) {
      stack.push(s[i]);
    } else if (stack[stack.length - 1] === "(") {
      if (s[i] === "(") stack.push(s[i]);
      else stack.pop();
    } else {
      return false;
    }
  }

  return stack.length === 0;
}

// O(n)
