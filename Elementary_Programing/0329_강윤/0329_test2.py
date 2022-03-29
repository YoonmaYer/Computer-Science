print('안녕하세요?')
name = input('이름이 어떻게 되시나요?')

print('만나서 반갑습니다.' + name + "씨")
print('이름의 길이는 다음과 같군요:', end=' ')  # end옵션, 줄 바꿈을 하지 않고 출력
print(len(name))

age = int(input("나이가 어떻게 되나요?"))
print("내년이면", str(age+1), "이 되시는군요.")

age = input("나이가 어떻게 되시나요?")
print('내년이면', int(age)+1, '이 되시는군요.')
