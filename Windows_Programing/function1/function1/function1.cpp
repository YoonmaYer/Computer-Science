#include <iostream>
using namespace std;

// 함수 정의
int max(int x, int y, int z)
{
	if (x > y && y > z)
		return x;
	else if (y > x && x > z)
		return y;
	else
		return z;
}
int main()
{
	int n;
	n = max(2, 3, 4); // 함수 호출
	cout << "연산 결과= " << n << endl;
	return 0;
}