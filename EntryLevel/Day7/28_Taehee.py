def solution(n):
    i = 0
    answer = 0
    while(i <= n):
        answer += i
        i += 2
    return answer

# range 쓰는 풀이
def solution2(n):
    return sum(range(2, n+1, 2))

# 수열의 합
def solution3(n):
    return (n//2) * (n//2 + 1)
