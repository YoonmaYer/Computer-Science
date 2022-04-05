#score = int(input("성적을입력하시오:"))
# if score >= 60:
# print("합격입니다.")

#num = int(input("정수를 입력하시오:"))
# if num % 2 == 0:
# print("짝수입니다.")
# print("짝짝짝.")

circle = int(input("원의 반지름을 입력하시오:"))
if circle > 0:
    area = 3.14 * circle ** 2
    print("원의 반지름이 %d인 원의 넓이는 %f입니다." % (circle, area))
