#total = 0
#a ="yes"

# while a == "yes":
#number = int(input("숫자를 입력하세요:"))
# total+=number
# a=input("계속?(yes/no)")

#print("합계는: ",total)

sum = 0
data = int(input("입력이 0이 아닌 정수를 입력하세요: "))

while data != 0:
    sum += data
    data = int(input("입력이 0이 아닌 정수를 입력하세요: "))

print("누적 합은 %d입니다" % sum)
