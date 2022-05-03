def max(num1, num2):
    if num1 > num2:
        result = num1
    else:
        result = num2
    return result


i = int(input())
j = int(input())
k = max(i, j)
print(i, "와/과", j, "중 큰 수는", k, "입니다.")
