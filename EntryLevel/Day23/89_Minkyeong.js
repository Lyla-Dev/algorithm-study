function solution(numlist, n) {
  numlist.sort((a, b) => {
    const disA = Math.abs(a - n);
    const disB = Math.abs(b - n);

    if (disA === disB) return b - a;
    return disA - disB;
  });

  return numlist;
}

// O(N log N)
// sort 함수 return은 음수, 0, 양수로 반환해야한다. true/false 아님!
