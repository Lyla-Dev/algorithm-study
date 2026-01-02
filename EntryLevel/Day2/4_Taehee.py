def solution(numbers):
    answer = []

    for num in numbers:
        answer.append(2 * num)

    return answer

print(solution([1,2,3,4,5]))
print(solution([1,2,100,-98,1,2,3]))