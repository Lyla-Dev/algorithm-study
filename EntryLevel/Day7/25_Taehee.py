def solution(my_string, letter):
    return my_string.replace(letter, '')

# replace 없는 풀이
def solution2(my_string, letter):
    answer = ''
    for char in my_string:
        if char != my_string:
            answer += char
    return answer