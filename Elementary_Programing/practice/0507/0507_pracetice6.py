contry = int(input("배송지 선택: 1. 한국 2. 미국"))

if contry == 1:
    price = int(input("상품의 가격: "))
    if price >= 20000:
        print("배송비는 무료입니다.")
    else:
        print("배송비는 3000원입니다.")

else:
    price = int(input("상품의 가격: "))
    if price >= 100000:
        print("배송비 무료!")
    else:
        print("배송비는 8000원 입니다.")
