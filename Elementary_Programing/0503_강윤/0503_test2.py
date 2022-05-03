# def print_address():
# print("홍길동")

# print_address()

# 순서 생각해서 프로그래밍 할 것.

def calculate_area(radius):
    result = 3.14 * radius**2  # result <- 지역변수
    return result


r = float(input("원의 반지름: "))
area = calculate_area(r)
print(area)  # area <- 전역변수
