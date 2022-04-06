# 학생의 시험 점수를 물어보고 시험 점수가 90점 이상이면 A, 80점 이상이면 B, 70점 이상이면 C, 60점 이상이면 D, 그외의 점수이면 F를 학점으로 주는 코드 작성

score = int(input("성적을 입력하시오: "))
if score >= 90:
    print("A학점입니다.")
elif score >= 80:
    print("B학점입니다.")
elif score >= 70:
    print("C학점입니다.")
elif score >= 60:
    print("D학점입니다.")
else:
    print("F학점입니다.")
