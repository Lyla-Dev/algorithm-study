function solution(n, wires) {
  let answer = n;

  for (let i = 0; i < wires.length; i++) {
    // subWires: 타겟 노드를 제외한 노드 리스트
    const subWires = wires.filter((_, idx) => idx !== i);
    const count = countNodes(wires[i][0], subWires, n);

    const diff = Math.abs(count - (n - count));
    answer = Math.min(answer, diff);
  }

  return answer;
}

// BFS 함수
function countNodes(startNode, subWires, n) {
  const visited = new Array(n + 1).fill(false);
  const queue = [startNode];
  visited[startNode] = true;
  let count = 1;

  while (queue.length > 0) {
    const curr = queue.shift();

    for (const [v1, v2] of subWires) {
      if (v1 === curr && !visited[v2]) {
        visited[v2] = true;
        queue.push(v2);
        count++;
      } else if (v2 === curr && !visited[v1]) {
        visited[v1] = true;
        queue.push(v1);
        count++;
      }
    }
  }
  return count;
}
