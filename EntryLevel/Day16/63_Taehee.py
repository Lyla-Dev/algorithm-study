def solution(my_string):
    expression = my_string.split()
    answer = int(expression[0])

    for i in range(1, len(expression), 2):
        operator = expression[i]
        num = int(expression[i+1])

        if operator == '+':
            answer += num
        else:
            answer -= num
        
    return answer

# 다른 풀이
def solution2(my_string):
    return sum(int(i) for i in my_string.replace(' - ', ' + -').split(' + '))

def solution3(my_string):
    # eval은 실무에서 보안 문제 때문에 극도로 자제한다고 함
    return eval(my_string)