#include <iostream>
using namespace std;

int main()
{
	int choice, area, length, width;
	cout << "도형을 선택하시오(1, 2, 3): ";
	cin >> choice;
	if (choice == 1) {
		cout << "가로:";
		cin >> length;
		cout << "세로";
		cin >> width;
		area = length * width;
		cout << "면적: " << area << endl;
	}
	else if (choice == 2) {
	}
	else {
		cout << "올바르지 못한 선택입니다." << endl;
	}
	return 0;




	

}