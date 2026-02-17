def solution(rsp):
    shobu_map = {"2": "0", "0": "5", "5": "2"}

    return ''.join([shobu_map[i] for i in rsp])

print(solution("2"))
print(solution("205"))