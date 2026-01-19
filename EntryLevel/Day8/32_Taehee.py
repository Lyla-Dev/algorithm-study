# 순서쌍의 개수
# 두 숫자의 곱이 n인 자연수 순서쌍의 개수

# 약수의 개수로 접근
def solution(n):
    count = 0
    for i in range(1, int(n**0.5)+1):
        if n % i == 0:
            count += 2
            if i * i == n:
                count -= 1
    return count
