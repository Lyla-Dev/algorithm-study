def solution(strlist):
    return [len(e) for e in strlist]


# 다른 풀이
def solution2(strlist):
    # map(함수, 리스트) : 리스트의 모든 요소를 하나씩 꺼내 함수에 넣고 실행
    # strlist의 모든 요소에 len() 함수 적용
    # map의 결과는 눈에 보이지 않는 객체라서 list()로 감싸줘야 함
    return list(map(len, strlist))

