def solution(chicken):
    coupons = chicken
    service_chickens = 0

    while coupons > 9:
        service_chickens += coupons // 10
        coupons = (coupons // 10) + coupons % 10
    
    return service_chickens