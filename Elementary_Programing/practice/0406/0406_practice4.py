import random
x = random.randint(1, 100)
y = random.randint(1, 100)

print(x, "-", y, "=", (x-y))
if x > y:
    print("정답입니다.")
elif x == y:
    print("0입니다.")
else:
    print("y가 x보다 클 수 없습니다.")
