num = int(input("정수를 입력하시오: "))

if num > 100 and num < 1000:
    print("num", "은(는) 100과 1000사이이다")
elif num < 100 and num < 1000:
    print("100보다 작다")
elif num > 100 and num > 1000:
    print("1000보다 크다")
else:
    print("잘못된 입력입니다.")
