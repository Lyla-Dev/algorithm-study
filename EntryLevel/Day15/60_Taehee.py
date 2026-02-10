def solution(n):
    return [i for i in range(1, n+1) if n % i == 0]

# 복잡도 낮춘 방법
def solution2(n):
    answer = []

    for i in range(1, int(n**0.5)+1):
        if n % i == 0:
            answer.append(i)

            if i != n // i:
                answer.append(n // i)

    return sorted(answer)
