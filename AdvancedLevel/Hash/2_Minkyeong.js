function solution(nums) {
  let set = new Set(nums);
  let pokemon = nums.length / 2;

  if (set.size >= pokemon) return pokemon;
  else return set.size;
}
// O(n)
