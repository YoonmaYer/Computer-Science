# 사용자가 질문을 하면 운세를 점치는 프로그램을 작성해보자

import sys
import random

name = input("이름: (종료하려면 엔터키) ")
if name == "":
    sys.exit()

question = input('무엇에 대하여 알고 싶은가요?')

print(name, "님", question, "에 괸하여 질문을 주셨군요.")
print("운명의 주사위를 굴려볼게요...")

answer = random.randint(1, 8)

if answer == 1:
    print("네, 확실합니다.")

elif answer == 2:
    print("전망이 좋을 것으로 예상됩니다.")

elif answer == 3:
    print("믿으셔도 됩니다.")

elif answer == 4:
    print("글쎄요, 아닌 것 같군요.")

elif answer == 5:
    print("한 점의 의심도 없이 맞습니다.")

elif answer == 6:
    print("그럼요, 명백히 올바른 선택을 했습니다.")

elif answer == 7:
    print("제 답변은 No입니다.")

else:
    print("나중에 다시 물어보세요.")
