x = int(input("정수를 입력하시오: "))
y = int(input("정수를 입력하시오: "))
if x % y == 0:
    print("%d(은)는 %d(으)로 나누어 떨어집니다." % (x, y))
else:
    print("%d(은)는 %d(으)로 나누어 떨어지지 않습니다." % (x, y))
