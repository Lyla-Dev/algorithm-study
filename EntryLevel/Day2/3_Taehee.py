# 최대공약수
def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

def solution(numer1, denom1, numer2, denom2):

    # 분모 통분 후 분자 계산
    denom = denom1 * denom2
    numer = numer1 * denom2 + numer2 * denom1

    # 약분
    common = gcd(numer, denom)
    
    return [numer // common, denom // common] 

print(solution(1,2,3,4))
print(solution(9,2,1,3))