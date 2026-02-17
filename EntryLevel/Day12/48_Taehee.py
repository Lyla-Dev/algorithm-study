def solution(n):
    answer = []
    i = 2

    while i <= n:
        if n % i == 0:
            answer.append(i)

            while n % i == 0:
                n //= i
        i += 1

    return answer

# 다른 풀이
def solution2(n):
    answer = []
    i = 2

    while i <= n:
        if n % i == 0:
            n /= i
            if i not in answer:
                answer.append(i)
            else:
                i += 1
    
    return answer

print(solution2(420))