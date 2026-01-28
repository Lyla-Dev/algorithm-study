def solution(numbers, k):
    index = (2 * (k - 1)) % len(numbers)
    return numbers[index]

print(solution([1, 2, 3, 4], 2))
print(solution([1, 2, 3, 4, 5, 6], 5))
print(solution([1, 2, 3], 3))