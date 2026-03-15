class MinHeap {
  constructor() {
    this.heap = [];
  }

  push(val) {
    this.heap.push(val);
    this.bubbleUp();
  }

  pop() {
    if (this.heap.length === 0) return null;
    if (this.heap.length === 1) return this.heap.pop();

    const root = this.heap[0];
    this.heap[0] = this.heap.pop();
    this.bubbleDown();
    return root;
  }

  bubbleUp() {
    let currentIdx = this.heap.length - 1;
    while (currentIdx > 0) {
      const parentIdx = Math.floor((currentIdx - 1) / 2);
      if (this.shouldSwap(parentIdx, currentIdx)) {
        [this.heap[parentIdx], this.heap[currentIdx]] = [
          this.heap[currentIdx],
          this.heap[parentIdx],
        ];
        currentIdx = parentIdx;
      } else break;
    }
  }

  bubbleDown() {
    let index = 0;
    while (true) {
      let left = index * 2 + 1;
      let right = index * 2 + 2;
      let smallest = index;

      if (left < this.heap.length && this.shouldSwap(smallest, left))
        smallest = left;
      if (right < this.heap.length && this.shouldSwap(smallest, right))
        smallest = right;

      if (smallest !== index) {
        [this.heap[index], this.heap[smallest]] = [
          this.heap[smallest],
          this.heap[index],
        ];
        index = smallest;
      } else break;
    }
  }

  shouldSwap(pIdx, cIdx) {
    const p = this.heap[pIdx];
    const c = this.heap[cIdx];
    if (p.period !== c.period) return p.period > c.period;
    if (p.request !== c.request) return p.request > c.request;
    return p.id > c.id;
  }
}

function solution(jobs) {
  let sortedJobs = jobs
    .map((job, i) => ({ id: i, request: job[0], period: job[1] }))
    .sort((a, b) => a.request - b.request);

  let heap = new MinHeap();
  let currentTime = 0;
  let totalTurnaroundTime = 0;
  let jobIdx = 0;
  let finishedCount = 0;

  while (finishedCount < jobs.length) {
    while (
      jobIdx < sortedJobs.length &&
      sortedJobs[jobIdx].request <= currentTime
    ) {
      heap.push(sortedJobs[jobIdx]);
      jobIdx++;
    }

    if (heap.heap.length > 0) {
      const currentJob = heap.pop();
      currentTime += currentJob.period;
      totalTurnaroundTime += currentTime - currentJob.request;
      finishedCount++;
    } else {
      currentTime = sortedJobs[jobIdx].request;
    }
  }

  return Math.floor(totalTurnaroundTime / jobs.length);
}

// O(n log n)
