function solution(chicken) {
  let coupons = 0;

  while (chicken >= 10) {
    coupons += Math.floor(chicken / 10);
    chicken = Math.floor(chicken / 10) + (chicken % 10);
  }

  return coupons;
}

// O(log n)
// 쿠폰 10개를 주면 치킨 한마리(쿠폰 한개)를 주는 방식
// 즉 쿠폰 9개 당 치킨 한마리를 먹을 수 있음 -> 더 간단한 풀이
