#include <iostream>
using namespace std;
// 어린이 12세 이하, ~19 청소년,19세 보다 크면 성인 출력
int main() {
	int x;
	cout << "나이를 입력하시오: ";
	cin >> x;

	if (x <= 12)
		cout << "어린이 입니다." << endl;
	else if (x <= 19)
		cout << "청소년 입니다." << endl;
	else
		cout << "성인입니다." << endl;
	return 0;
}