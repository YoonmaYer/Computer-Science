#include <iostream>
using namespace std;

int main()
{
	int n;
	int i = 1; // 구구단은 1부터 시작이기 때문에 1로 초기값 설정

	cout << "구구단 중에서 출력하고 싶은 단을 입력하시오: ";
	cin >> n;
	while (i <= 9) { // i는 9보다 작거나 같다.
		cout << n << "*" << i << "=" << n * i << endl;
		i++; // 후위 증감연산자, 계산 후 1 증가, i가 9가 될때까지 반복
	}
	return 0;
}