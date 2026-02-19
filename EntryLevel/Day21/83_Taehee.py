def solution(sides):
    min_s, max_s = min(sides), max(sides)

    return len(range(max_s - min_s + 1, min_s + max_s))
    # return 2 * min_s - 1