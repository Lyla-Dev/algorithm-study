def solution(n, k):
    return n * 12000 + (k - n//10) * 2000

print(solution(10, 3))
print(solution(64, 6))