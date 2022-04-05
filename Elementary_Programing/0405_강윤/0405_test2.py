#number = int(input("정수를 입력하시오: "))
# if number % 2 == 0:
#print(number, "은/는 짝수")
# else:
#print(number, "은/는 홀수")

r = int(input("원의 반지름을 입력하시오:"))
if r > 0:
    area = 3.14 * r ** 2
    print("원의 반지름의 %d인 원의 넓이는 %f 입니다." % (r, area))
else:
    print("반지름 값이 음수입니다.")
