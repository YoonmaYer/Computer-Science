# 다음 코드의 각 단계에서 변수의 값을 예상해보시오.

n = 1234
sum = 0
while n > 0:
    digit = n % 10 # n = 1234, digit = 4, n =123, digit = 3, n = 12, digit = 2 
    sum = sum + digit # sum = 4, sum = 7, sum = 9, sum = 10
    n = n // 10 # n = 123, n = 12, n = 1, n = 0
print(sum) # 10
