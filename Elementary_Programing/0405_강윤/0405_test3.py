#year = int(input("연도를 입력하시오:"))

# if (year % 4 == 0) and (year % 100 != 0) or (year % 400 == 0):
#print(year,"년은 윤년입니다.")


import random
time = random.randint(1, 24)
print("좋은 아침입니다. 지금 시각은" + str(time)+"시 입니다.")

sunny = random.choice([True, False])
if sunny:
    print("현재 날씨가 화창합니다.")
else:
    print("현재 날씨가 화창하지 않습니다.")

# 종달새가 노래를 할 것인지를 판단해 보자.
if time >= 6 and time < 9 and sunny:
    print("종달새가 노래를 한다.")
else:
    print("종달새가 노래를 하지 않는다.")
