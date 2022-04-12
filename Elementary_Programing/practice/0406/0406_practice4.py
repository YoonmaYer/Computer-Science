# 난수를 사용하여 1부터  100사이의 숫자를 사용하는 뺄셈 문제를
# 생성하고 사용자에게 물어본 후에 사용자의 답변이 올바른지를 검사하는 프로그램을 작성하시오.
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
