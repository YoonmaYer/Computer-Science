import random

x = random.randint(1, 10)
y = random.randint(1, 10)
ans = x*y

while True:
    usr = int(input(str(x) + "*" + str(y) + "(은)는: "))
    if (usr == ans):
        print("맞았습니다.")
        break
