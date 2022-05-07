import random

while 1:
    a = random.randint(1, 100)
    b = random.randint(1, 100)
    print(a, "+", b, '=', end="")

    answer = int(input())

    if answer == a+b:
        print("잘했어요")
        break
    else:
        print("다음번에 더 잘할 수 있어요.")
