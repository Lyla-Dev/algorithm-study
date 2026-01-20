// Node.js 표준 입출력
const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

let input = [];

rl.on("line", function (line) {
  input = line.split(" ");
}).on("close", function () {
  var str = "";
  for (let i = 1; i <= Number(input[0]); i++) {
    str += "*".repeat(i) + "\n";
  }
  console.log(str);
});

//     for(let i = 0; i < Number(input[0]); i++) {
//         for(let j = 0; j < (i + 1); j++) {
//             str += "*";
//         }
//         str += "\n";
//     }

// O(n^2)
// for문으로 해도 되지만, 더 간결하고 가독성 좋은 코드를 위해 repeat 함수 사용
