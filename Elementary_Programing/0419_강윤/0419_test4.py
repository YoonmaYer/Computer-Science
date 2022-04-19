count = 1
sum = 0

while count <= 5:
    print("5개의 수를 입력받습니다. 정수를 입력하세요: ")

    number = int(input())
    if number % 2 == 0:
        sum = sum+number
    count += 1

print("짝수의 누적 합은 %d입니다." % sum)
