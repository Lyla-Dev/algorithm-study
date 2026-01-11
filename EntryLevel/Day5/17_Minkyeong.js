function solution(price) {
  let rate = 1;

  if (price >= 500000) {
    rate = 0.8;
  } else if (price >= 300000) {
    rate = 0.9;
  } else if (price >= 100000) {
    rate = 0.95;
  }

  return Math.floor(price * rate);
}

// 원래는 if 문 안에 price = price * 0.8 과 같은 형태로 사용했으나
// 재할당보다는 코드 간 결합도를 낮추기 위해 rate 변수를 사용하였습니다!
