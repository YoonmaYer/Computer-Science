#include <iostream>
using namespace std;
// C++에서는 변수의 이름이 같아도 타입이 다르면 중복하여 선언할 수 있다.
// 정수값을 제곱하는 함수
int square(int i)
{
	cout << "square(int) 호출" << endl;
	return i * i;
}

// 실수값을 제곱하는 함수
double square(double i)
{
	cout << "square(double) 호출" << endl;
	return i * i;
}

int main()
{
	cout << square(10) << endl; // 정수타입 호출
	cout << square(2.0) << endl; // 실수타입 호출
	return 0;
}