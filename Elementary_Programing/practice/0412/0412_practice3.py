# 복리이자율 7%로 1000만원을 저금했을 경우에 2000만원이 되는데 몇년이 걸리는지에 대한 코드를 작성해라

year = 0
balance = 1000

while balance <= 2000:
    year = year + 1
    interest = balance * 0.07
    balance = balance + interest
print(year, "년이 걸립니다.")
