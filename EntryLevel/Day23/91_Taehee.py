def solution(babbling):
    answer = 0

    for word in babbling:
        word = word.replace("aya", " ")
        word = word.replace("ye", " ")
        word = word.replace("woo", " ")
        word = word.replace("ma", " ")

        if word.strip() == "":
            answer += 1
        
    return answer

# strip(): 양쪽 끝의 공백을 자르는 함수
# lstrip(): 왼쪽 공백만 지우는 함수
# rstrip(): 오른쪽 공백만 지우는 함수