### 집합에 관련된 python 연산을 연습해보자
## random 모듈을 이용하여 난수(랜덤넘버, random number)를 생성하여 두 집합을 만들고 
## 합집합 : |, 교집합: &, 차집합: -, 대칭차집합: ^ 등의 연산자를 적용하여 출력한다.

## 집합 연산 함수 정의
def union_set(A,B):     return A|B

def inter_set(A,B):     return A&B

def diff_set(A,B):     return A-B

def sym_diff_set(A,B):      return A^B

## 메임 함수 정의
import random  # 랜덤 넘버 생성 모듈 불러오기
def main():
    S, T = {random.randint(1,100) for i in range(20)}, {random.randint(1,100) for i in range(20)}
    print("집합 A= %s " %S)
    print("집합 A= %s " %T)

    print("\n") # 한 줄 건너 뛰기
          
    print(".... S와 T의 합집합[원소수 : %d-개] =  %s" % (len(union_set(S,T)), union_set(S,T)))
    print(".... S와 T의 교집합[원소수 : %d-개] =  %s" % (len(inter_set(S,T)), inter_set(S,T)))
    print(".... S에서 T의 차집합[원소수 : %d-개] =  %s" %(len(diff_set(S,T)), diff_set(S,T)))
    print(".... T에서 S의 차집합[원소수 : %d-개] =  %s" %(len(diff_set(T,S)), diff_set(T,S)))
    print(".... S와 T의 대칭 차집합[원소수 : %d-개] =  %s" %(len(sym_diff_set(S,T)), sym_diff_set(S,T)))

    print("\n") # 한 줄 건너 뛰기
    
### 실행문
if __name__ == "__main__":
    main()


    
    
