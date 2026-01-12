# def solution(numbers):
#     answer = []

#     for num in numbers:
#         answer.append(2 * num)

#     return answer

def solution(numbers):
    return [num * 2 for num in numbers]

print(solution([1,2,3,4,5]))
print(solution([1,2,100,-98,1,2,3]))