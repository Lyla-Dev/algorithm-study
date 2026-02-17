def solution(hp):
    ants = {
        "general": 5,
        "soldier": 3,
        "work": 1
    }

    total_ants = 0

    for power in ants.values():
        total_ants += hp // power
        hp %= power
    
    return total_ants

print(solution(23))
print(solution(24))
print(solution(999))
    
# 다른 풀이
def solution2(hp):
    return hp // 5 + (hp % 5 // 3) + ((hp % 5) % 3)

print(solution2(23))
print(solution2(24))
print(solution2(999))