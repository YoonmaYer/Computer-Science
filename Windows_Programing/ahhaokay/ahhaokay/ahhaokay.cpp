#include <iostream>
using namespace std;

int main()
{
	int n = 12;
	while (n > 0) {
		n = n - 2; // n = 10
		if (n == 6)
			break;
		cout << n << endl; // 나의 예상 : 12, 10, 8, 6
	}
	return 0; // 결과 10, 8
}