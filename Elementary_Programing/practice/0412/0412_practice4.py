# 다음 코드의 각 단계에서 변수의 값을 예상해보시오.

n = 1234
sum = 0
while n > 0:
    digit = n % 10
    sum = sum + digit
    n = n // 10
print(sum)
