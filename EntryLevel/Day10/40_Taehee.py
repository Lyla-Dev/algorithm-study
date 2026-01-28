def solution(numbers, direction):
    if direction == "right":
        return [numbers[-1]] + numbers[:-1]
    elif direction == "left":
        return numbers[1:] + [numbers[0]]    

print(solution([1,2,3], "right"))
print(solution([4, 455, 6, 4, -1, 45, 6], "left"))