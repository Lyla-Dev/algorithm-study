def solution(score):
    sum_scores = [sum(s) for s in score]
    sorted_sums = sorted(sum_scores, reverse=True)
    answer = [sorted_sums.index(s) + 1 for s in sum_scores]

    return answer