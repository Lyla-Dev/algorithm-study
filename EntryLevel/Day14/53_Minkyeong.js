function solution(array, n) {
  let best = array[0];
  let closest = Math.abs(array[0] - n);

  for (let i = 1; i < array.length; i++) {
    const x = array[i];
    const diff = Math.abs(x - n);

    if (diff < closest || (diff === closest && x < best)) {
      best = x;
      closest = diff;
    }
  }

  return best;
}

// O(n)
