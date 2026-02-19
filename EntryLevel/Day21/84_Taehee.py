def solution(spell, dic):
    sorted_spell = sorted(spell)

    for word in dic:
        if sorted(word) == sorted_spell:
            return 1
    
    return 2

# 다른 풀이 - 집합 이용
def solution2(spell, dic):
    spell_set = set(spell)
    for word in dic:
        if set(word) == spell_set and len(word) == len(spell):
            return 1
    return 2