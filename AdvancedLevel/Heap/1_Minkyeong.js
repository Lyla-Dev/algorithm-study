// Heap 구현
class MinHeap {
  constructor() {
    this.heap = [];
  }

  // push
  // 새로운 데이터 삽입
  // 트리의 가장 마지막 노드에 데이터를 삽입 후
  // 힙의 규칙을 만족할 때까지 위로 올린다.
  push(value) {
    this.heap.push(value);
    this.bubbleUp();
  }

  // pop
  // 루트 노드 데이터 pop
  // 이후 배열의 마지막 원소를 루트 자리로 옮김
  // 버블다운으로 제자리 찾기
  pop() {
    if (this.heap.length === 1) return this.heap.pop();
    const root = this.heap[0];
    this.heap[0] = this.heap.pop();
    this.bubbleDown();
    return root;
  }

  // peek
  // 루트 노드 확인만 하고 제거는 안함
  peek() {
    return this.heap[0];
  }

  // bubbleUp()
  // 새로 추가된 노드 올리기
  // 현재 노드와 부모 노드 크기 비교
  // 부모 노드가 더 크면 교체
  bubbleUp() {
    let currentIdx = this.heap.length - 1;

    // 부모가 자식보다 큰 동안 계속 위로 올림
    while (currentIdx > 0) {
      let parentIdx = Math.floor((currentIdx - 1) / 2);
      if (this.heap[parentIdx] <= this.heap[currentIdx]) break;

      [this.heap[currentIdx], this.heap[parentIdx]] = [
        this.heap[parentIdx],
        this.heap[currentIdx],
      ];
      currentIdx = parentIdx;
    }
  }

  // bubbleDown()
  // 루트 노드 내리기
  // 현재 노드를 왼쪽, 오른쪽 자식 노드 중 작은 값과 비교
  // 자식 노드가 더 작으면 교체
  bubbleDown() {
    let currentIdx = 0;
    while (true) {
      let leftChildIdx = currentIdx * 2 + 1;
      let rightChildIdx = currentIdx * 2 + 2;
      let smallestIdx = currentIdx;

      // 왼쪽 자식이 있고, 부모보다 작다면 smallestIdx 갱신
      if (
        leftChildIdx < this.heap.length &&
        this.heap[leftChildIdx] < this.heap[smallestIdx]
      ) {
        smallestIdx = leftChildIdx;
      }

      // 오른쪽 자식이 있고, 현재 smallestIdx보다 더 작다면 갱신
      if (
        rightChildIdx < this.heap.length &&
        this.heap[rightChildIdx] < this.heap[smallestIdx]
      ) {
        smallestIdx = rightChildIdx;
      }

      if (this.heap[currentIdx] > this.heap[smallestIdx]) {
        [this.heap[currentIdx], this.heap[smallestIdx]] = [
          this.heap[smallestIdx],
          this.heap[currentIdx],
        ];
      }
      if (currentIdx === smallestIdx) break;
      currentIdx = smallestIdx;
    }
  }
}

function solution(scoville, K) {
  const heap = new MinHeap();
  let answer = 0;

  for (let s of scoville) {
    heap.push(s);
  }

  while (heap.peek() < K) {
    if (heap.heap.length < 2) return -1;
    const a = heap.pop();
    const b = heap.pop();

    heap.push(a + b * 2);
    answer++;
  }

  return answer;
}

// function solution(scoville, K) {
//     let answer = 0;

//     while (scoville.length >= 2) {
//         if (scoville.every(sc => sc >= K)) return answer;
//         scoville.sort((a, b) => a - b);
//         const newMix = scoville[0] + scoville[1] * 2;
//         scoville.push(newMix);
//         answer++;
//     }

//     return -1;
// }
