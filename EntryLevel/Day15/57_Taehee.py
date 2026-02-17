def solution(numbers):
    english = ["zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"]

    for i, word in enumerate(english):
        numbers = numbers.replace(word, str(i))

    return int(numbers)

# enumerate() 함수: 인덱스와 값을 쌍으로 반환