function solution(sizes) {
  let biggestW = 0;
  let biggestH = 0;

  for (let [w, h] of sizes) {
    if (w < h) {
      let temp = h;
      h = w;
      w = temp;
    }

    if (biggestW < w) biggestW = w;
    if (biggestH < h) biggestH = h;
  }

  return biggestW * biggestH;
}
// O(n)
