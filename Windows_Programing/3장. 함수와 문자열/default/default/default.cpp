#include <iostream>
using namespace std;
// display() : 문자를 여러 번 출력하는 함수
// 문자 c를 n번 반복하여 화면에 출력한다.
void display(char c = '*', int n = 10) // 디폴트 : '*' , 10
{
	for (int i = 0; i < n; i++)
		cout << c;
	cout << endl;
}

int main()
{
	cout << "아무런 인수가 전달되지 않는 경우:\n";
	display(); // 인수가 없으므로 디폴트 값이 사용됨. *가 10개 출력됨.

	cout << "\n첫 번째 인수만 전달되는 경우:\n";
	display('#'); // 주어진 #과 디폴트 값 10이 사용됨. #가 10개 출력됨.

	cout << "\n모든 인수가 전달되는 경우:\n";
	display('#', 5); // 2개의 인수를 가지고 있으므로 #이 5개 출력됨.

	return 0;
}