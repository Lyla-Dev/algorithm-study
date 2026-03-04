function solution(array, commands) {
  let answer = [];

  for (let l = 0; l < commands.length; l++) {
    let temp = commands[l];
    let slicedArr = array.slice(temp[0] - 1, temp[1]);
    slicedArr.sort((a, b) => a - b);
    answer.push(slicedArr[temp[2] - 1]);
  }

  return answer;
}

// O(n log n)
