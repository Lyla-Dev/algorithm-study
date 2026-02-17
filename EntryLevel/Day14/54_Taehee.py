def solution(order):
    s = str(order)    
    return s.count('3') + s.count('6') + s.count('9')

# 다른 풀이
def solution2(order):
    return sum(map(lambda x: str(order).count(str(x)), [3,6,9]))