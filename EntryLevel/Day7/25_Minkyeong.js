function solution(my_string, letter) {
  return my_string.split(letter).join("");
}

// 가장 처음 letter만 없앨 때 -> replace(letter, '')
// 모든 특정 letter를 없애는데, 그 letter가 이미 명시된 경우
// => 정규표현식 사용 my_string.replace(/(특정 letter)/g, '')
