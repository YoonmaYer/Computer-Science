# 1부터 사용자가 입력한 수까지의 덧셈 결과를 계산하는 문제를 작성하여라

# 과제 x
sum = 0

number = int(input("숫자를 입력하세요: "))

for x in range(1, number+1):
    sum += x

print("1부터 %d까지의 합은 %d입니다." % (number, sum))
