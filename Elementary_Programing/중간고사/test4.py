import random
num = random.randint(1, 100)

if num >= 90:
    print(num, "점은 장학생이다.")
elif num >= 60:
    print(num, "점은 합격이다.")
elif num < 60:
    print(num, "점은 불합격이다.")
else:
    print("교수님 시험시간 좀 더 주시지 그랬어요")
