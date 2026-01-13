def solution(n):
    if n % 7 == 0:
        return n//7
    else:
        return n//7 + 1

print(solution(7))
print(solution(1))
print(solution(15))

# 다른 풀이
def solution2(n):
    return (n-1) // 7 + 1