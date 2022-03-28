#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str; // 변수는 do 문장 밖에서 선언
	do {
		cout << "문자열을 입력하시오: ";
		getline(cin, str); // 사용자로부터 한 줄의 텍스트를 받을 떄 사용하는 함수이다.
		cout << "사용자의 입력: " << str << endl;
	} while (str != "종료");
	return 0; // do-while 루프는 문장이 한번은 실행되어야 하는 경우에 쓰임.
}