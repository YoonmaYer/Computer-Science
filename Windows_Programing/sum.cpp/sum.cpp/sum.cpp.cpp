#include <iostream>
using namespace std;

int main()
{
	int sum = 0; // 초기값 0으로 설정, 정수들의 합을 저장한다.
	for (int i = 1; i <= 10; i++) // 초기식, 조건식, 증감식
		sum += i;

	cout << "1부터 10까지의 정수의 합 = " << sum << endl;
	return 0;
}