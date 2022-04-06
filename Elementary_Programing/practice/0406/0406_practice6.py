# 2자리 숫자로 이루어진 복권이 있다. 사용자가 가지고 있는 복권 번호가 2자리 모두
# 일치하면 100만원을 받는다. 2자리 중에서 하나만 일치하면 50만원을 받는다.
# 하나도 일치하지 않는다면 상금은 없다.
# 복권 당첨 번호는 난수로 생성하고 사용자의 입력에 따라서 상금이 얼마인지 출력하는 프로그램을 작성하라.

import random
luck = random.randint(1, 100)

num = int(input("복권번호를 입력해주세요: "))

print("당첨번호는", luck, "입니다.")

digit1 = luck//10
digit2 = luck % 10

number1 = num//10
number2 = num % 10

if(luck == num):
    print("상금은 100만원입니다.")
elif(digit1 == number1 or digit1 == number2 or digit2 == number1 or digit2 == number2):
    print("상금은 없습니다.")
else:
    print("상금은 없습니다.")
