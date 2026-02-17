def solution(my_string):
    return sum([int(c) for c in my_string if c.isdigit()])

print(solution("aAb1B2cC34oOp"))
print(solution("1a2b3c4d123"))