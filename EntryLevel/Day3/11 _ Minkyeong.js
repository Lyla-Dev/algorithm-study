function solution(array) {
  const freq = new Map();

  // 숫자 별 빈도 체크
  for (let val of array) {
    freq.set(val, (freq.get(val) ?? 0) + 1);
  }

  let max = 0;
  let maxCnt = 0;
  let maxNum = 0;

  for (let [key, cnt] of freq) {
    if (cnt > max) {
      max = cnt; // 최대 빈도 갱신
      maxCnt = 1; // 최대 빈도의 갯수 갱신
      maxNum = key; // 실제 최빈값 갱신
    } else if (cnt === max) {
      maxCnt++;
    }
  }

  if (maxCnt < 2) {
    return maxNum;
  }
  return -1;
}

// Map은 Key->value 형태 구조.
// freq.set(3, 1); // key: 3, value: 1
// freq.get(3); // 1
// Map을 for of로 돌리면 [key, value]로 나옴
