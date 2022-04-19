#count = 1
#sum = 0
# while count <= 10:
#sum = sum + count
#count = count + 1
#print("합계는", sum)

dan = int(input("원하는 단을 입력하세요:"))
i = 1

while i <= 9:
    print("%d*%d=%2d" % (dan, i, dan*i))
    i = i+1
