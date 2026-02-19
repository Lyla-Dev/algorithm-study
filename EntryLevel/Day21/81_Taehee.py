def solution(my_string):
    num_str = "".join(c if c.isdigit() else " " for c in my_string)

    return sum(int(n) for n in num_str.split())