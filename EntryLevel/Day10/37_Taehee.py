def solution(dot):
    x, y = dot
    if x * y > 0:
        return 1 if x > 0 else 3
    else:
        return 4 if x > 0 else 2
    
print(solution([2, 4]))
print(solution([-7, 9]))
