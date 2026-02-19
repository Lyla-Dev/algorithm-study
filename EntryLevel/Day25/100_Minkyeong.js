function solution(common) {
  const diff1 = common[1] - common[0];
  const diff2 = common[2] - common[1];
  const last = common[common.length - 1];

  if (diff1 === diff2) {
    return last + diff1;
  } else {
    return last * (common[1] / common[0]);
  }
}

// O(1)
// 원래 공간복잡도를 고려하여 최대한 변수 설정을 자제했지만,
// 실제 코딩 환경에서는 유지보수성을 고려하여 변수를 적절히 설정하는 것이 낫다고 판단.
// 변수 지정이 공간복잡도에 주는 영향은 큰 배열이 아니라면 미미함.
