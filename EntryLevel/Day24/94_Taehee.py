def solution(bin1, bin2):
    answer = ""
    carry = 0

    i = len(bin1) - 1
    j = len(bin2) - 1

    while i >=0 or j >=0 or carry > 0:
        bit1 = int(bin1[i]) if i >= 0 else 0
        bit2 = int(bin2[j]) if j >= 0 else 0

        total = bit1 + bit2 + carry

        answer = str(total % 2) + answer

        carry = total // 2

        i -= 1
        j -= 1
    
    return answer

# 다른 풀이
def solution2(bin1, bin2):
    # 1. int(문자열, 2) 를 이용해 이진수 문자열을 10진수 정수로 바꾼 후 더함
    # 2. bin() 함수를 이용해 더한 결과를 다시 이진수 문자열로 변환
    # 3. bin() 결과는 '0b'로 시작하므로 [2:]를 통해 앞의 두 글자를 잘라냄
    return bin(int(bin1, 2) + int(bin2, 2))[2:]

def solution3(bin1, bin2):
    # :b 는 이 숫자를 이진수 문자열로 포매팅하라는 뜻
    return f"{int(bin1, 2) + int(bin2, 2):b}"