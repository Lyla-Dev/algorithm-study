def solution(polynomial):
    x_coef = 0
    const = 0

    for term in polynomial.split(" + "):
        if "x" in term:
            if term == "x":
                x_coef += 1
            else:
                x_coef += int(term[:-1])
        else:
            const += int(term)

    answer = []

    if x_coef > 0:
        if x_coef == 1:
            answer.append("x")
        else:
            answer.append(f"{x_coef}x")
    
    if const > 0:
        answer.append(str(const))

    return " + ".join(answer) if answer else "0"