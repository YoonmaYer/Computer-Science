#include <iostream>
using namespace std;

int main() {
	char secretcode = 'q';

	char code;
	
	cout << "비밀코드를 맞춰보세요: ";
	cin >> code;

	if (code > secretcode)
		cout << "뒤에 있음" << endl;
	else if (code < secretcode)
		cout << code << "앞에 있음" << endl;
	else
		cout << code << "맞추었습니다!" << endl;

	return 0;


}