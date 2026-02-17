def solution(box, n):
    w, l, h = box
    return (w // n) * (l // n) * (h // n)

print(solution([1, 1, 1], 1))
print(solution([10, 8, 6], 3))