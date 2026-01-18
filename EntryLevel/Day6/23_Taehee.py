def solution(num_list):
    count_even = 0
    for num in num_list:
        if num % 2 == 0:
            count_even += 1

    return [count_even, len(num_list)-count_even]


# 다른 풀이
def solution2(num_list):
    answer = [0,0]
    for num in num_list:
        answer[num % 2] += 1
    return answer