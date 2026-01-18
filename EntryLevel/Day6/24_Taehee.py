def solution(my_string, n):
    answer = ''
    for c in my_string:
        answer += c * n
    return answer

# 다른 풀이
def solution2(my_string, n):
    return ''.join(c * n for c in my_string)

'''
join() 함수
- 문자열 메서드
- 문자열들을 하나의 문자열로 이어 붙일 때 사용

','.join(['a', 'b', 'c'])
>> 결과: `'a,b,c'`

''.join(['a', 'b', 'c'])
>> 결과: `'abc'`
'''