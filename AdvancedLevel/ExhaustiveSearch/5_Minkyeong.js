// 재귀함수 이용
// 가능한 실행 순서 모두 구하기
function order(current, remaining, result) {
  if (remaining.length === 0) {
    result.push(current);
    return;
  }

  for (let i = 0; i < remaining.length; i++) {
    const nextIdx = remaining[i];
    const nextRemaining = remaining.filter((_, idx) => idx !== i);
    order([...current, nextIdx], nextRemaining, result);
  }
}

// 순서에 따라 직접 실행해보며 최대 몇 개의 던전을 탐험할 수 있는지 구하기
function solution(k, dungeons) {
  const result = [];
  const index = [];
  const dungeonNum = [];

  for (let i = 0; i < dungeons.length; i++) {
    index.push(i);
  }
  order([], index, result);

  // result = 가능한 순서 경우의 수 리스트
  for (let idxList of result) {
    let power = k;
    let cnt = 0;
    for (let idx of idxList) {
      if (dungeons[idx][0] > power) {
        // 피로도가 부족해진 케이스
        break;
      }
      power -= dungeons[idx][1];
      cnt++;
    }
    // 최종 던전 개수 반환
    dungeonNum.push(cnt);
  }

  return Math.max(...dungeonNum);
}

// O(n)
