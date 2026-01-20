def solution(num_list):
    results = []
    for i in range(len(num_list)):
        results.append(num_list[-(i+1)])
    return results

print(solution([1,2,3,4,5]))
print(solution([1, 1, 1, 1, 1, 2]))
print(solution([1, 0, 1, 1, 1, 3, 5]))

# 다른 풀이
# 슬라이싱 [시작:끝:보폭]
# numbers[::1]은 정방향, [::-1]은 역방향
def solution2(num_list):
    return num_list[::-1]

# list.reverse() 사용: 리스트 원본 자체를 뒤집는 함수
def solution3(num_list):
    num_list.reverse()
    return num_list

'''
reverse()와 [::-1]의 차이: 메모리 동작 방식

1. list.reverse() 메서드
> in-place(제자리 연산): 원본 리스트 자체를 뒤집음
> 메모리: 추가 메모리 거의 쓰지 않음. O(1) Space
> 반환값: None (결과 반환하지 않고, 원본만 바꿈)

2. list[::-1] 슬라이싱
> cop(복사): 원본은 그대로 두고, 뒤집힌 새로운 리스트 생성
> 메모리: 리스트 크기만큼의 새로운 메모리 필요. O(N) Space
> 반환값: 뒤집힌 리스트 객체

* 코딩테스트에서는 편의성으로 [::-1] 쓴다 함
'''