# 사용자가 입력한 숫자들을 더하는 프로그램을 작성해보자.

total = 0
answer = "yes"
while answer == "yes":
    num = int(input("숫자를 입력하시오: "))
    total = total + num
    answer = input("계속?(yes/no :)")

print("합계는 : ", total)
