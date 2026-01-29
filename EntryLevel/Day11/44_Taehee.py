def solution(n):
    answer = 1
    factorial = 1

    while factorial * (answer + 1) <= n:
        answer += 1
        factorial *= answer

    return answer