def solution(sides):
    sides.sort()
    return 1 if sides[2] < sides[0] + sides[1] else 2

# 다른 풀이
def solution2(sides):
    return 1 if max(sides) < (sum(sides) - max(sides)) else 2