print("선택한 번호의 넓이를 구하시오.")
x = int(input("선택하시오(1: 사각형 2:삼각형)"))

if x == 1:
    y = int(input("가로를 입력하시오: "))
    z = int(input("세로를 입력하시오: "))
    s = y * z
    print("넓이는 %d 입니다." % (s))

elif x == 2:
    q = int(input("가로를 입력하시오: "))
    w = int(input("세로를 입력하시오: "))
    t = q * w / 2
    print("넓이는 %d 입니다." % (t))

else:
    print("잘못된 입력입니다.")
