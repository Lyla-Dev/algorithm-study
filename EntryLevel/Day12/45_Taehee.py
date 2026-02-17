def solution(my_string):
    vowels = ['a', 'e', 'i', 'o', 'u']
    
    for c in vowels:
        my_string = my_string.replace(c, '')

    return my_string

# 다른 풀이
# 'aeiou'에 없는 글자만 뽑아서 리스트로 만들고, 다시 조인('')
def solution(my_string):
    return "".join([char for char in my_string if char not in "aeiou"])