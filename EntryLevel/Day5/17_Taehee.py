def solution(price):
    if price >= 500000:
        discount_percent = 20
    elif price >= 300000:
        discount_percent = 10
    elif price >= 100000:
        discount_percent = 5
    else:
        discount_percent = 0
    
    return int(price * (1 - discount_percent/100))

print(solution(150000))
print(solution(580000))

# 다른 풀이
# 다만 이 풀이는 딕셔너리 순서에 의존하게 됨
def solution(price):
    discount_rates = {500000: 0.8, 300000: 0.9, 100000: 0.95, 0: 1}
    for discount_price, discount_rate in discount_rates.items():
        if price >= discount_price:
            return int(price * discount_rate)