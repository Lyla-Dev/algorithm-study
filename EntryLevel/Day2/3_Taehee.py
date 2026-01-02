def solution(numer1, denom1, numer2, denom2):
    answer = []
    denom = denom1 * denom2
    numer = numer1 * (denom//denom1) + numer2 * (denom//denom2)
    
    answer.append(numer)
    answer.append(denom)
    return answer

print(solution(1,2,3,4))
print(solution(9,2,1,3))