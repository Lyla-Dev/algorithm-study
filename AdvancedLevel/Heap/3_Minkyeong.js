class MinHeap {
  constructor() {
    this.heap = [];
  }

  push(val) {
    this.heap.push(val);
    this.bubbleUp();
  }

  minPop() {
    if (this.heap.length === 0) return null;
    if (this.heap.length === 1) return this.heap.pop();
    else {
      let min = this.heap[0];
      this.heap[0] = this.heap.pop();
      this.bubbleDown();
      return min;
    }
  }

  maxPop() {
    if (this.heap.length === 0) return null;
    const maxVal = Math.max(...this.heap);
    const maxIdx = this.heap.lastIndexOf(maxVal);
    this.heap.splice(maxIdx, 1);
    return maxVal;
  }

  bubbleUp() {
    let index = this.heap.length - 1;
    while (true) {
      let parent = Math.floor((index - 1) / 2);
      if (this.heap[index] < this.heap[parent]) {
        [this.heap[index], this.heap[parent]] = [
          this.heap[parent],
          this.heap[index],
        ];
        index = parent;
      } else break;
    }
  }

  bubbleDown() {
    let index = 0;
    let child = 0;
    while (true) {
      let left = index * 2 + 1;
      let right = index * 2 + 2;
      if (this.heap.length > left) {
        if (this.heap.length > right) {
          child = this.heap[left] < this.heap[right] ? left : right;
        } else child = left;

        if (this.heap[index] > this.heap[child]) {
          [this.heap[index], this.heap[child]] = [
            this.heap[child],
            this.heap[index],
          ];
          index = child;
        } else break;
      } else {
        break;
      }
    }
  }
}

function solution(operations) {
  let minHeap = new MinHeap();

  for (let i = 0; i < operations.length; i++) {
    const arr = operations[i].split(" ");
    if (arr[0] === "I") {
      minHeap.push(Number(arr[1]));
    }
    if (arr[0] === "D") {
      if (arr[1] === "1") {
        minHeap.maxPop();
      }
      if (arr[1] === "-1") {
        minHeap.minPop();
      }
    }
  }

  return minHeap.heap.length === 0
    ? [0, 0]
    : [Math.max(...minHeap.heap), Math.min(...minHeap.heap)];
}

// O(n^2)
