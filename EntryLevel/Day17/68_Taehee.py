def solution(quiz):
    answer = []
    for q in quiz:
        x, op, y, eq, z  = q.split()
        x, y, z = int(x), int(y), int(z)

        if op == '+':
            is_correct = (x + y == z)
        else:
            is_correct = (x - y == z)

        answer.append('O' if is_correct else 'X')

    return answer

# x, op, y, _, z  = q.split()
# 필요 없는 등호는 관례적으로 언더바(_) 변수에 버려서 사용하지 않는다는 의도