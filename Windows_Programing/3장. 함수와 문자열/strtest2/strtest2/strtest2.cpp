#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s = "When in Rome, do as the Romans.";

	int index = s.find("Rome"); // s.find() : 멤버 함수, s에서 문자열 ()이 발견되는 첫번째 인덱스를 변환
	cout << index << endl;
	return 0;
}