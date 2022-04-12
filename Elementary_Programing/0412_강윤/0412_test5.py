# 처음 수와 마지막 수를 입력 받아 처음 수부터 마지막 수까지의 합을
# for문을 사용하여 작성하여라

sum = 0

number1 = int(input("처음 숫자를 입력하세요: "))
number2 = int(input("마지막 숫자를 입력하세요: "))

for x in range(number1, number2+1):
    sum += x

print("%d부터 %d까지의 합은 %d입니다." % (number1, number2, sum))
