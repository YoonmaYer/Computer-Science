import random

while 1:
    x = random.randint(1, 100)
    y = random.randint(1, 100)

    print(x, "+", y, "=", end="")

    answer = input()
    if answer == 'a':
        print("종료합니다.")
        break
    elif int(answer) == x+y:
        print("잘했어요.")
    else:
        print("다음번엔 잘 할 수 있죠?")
