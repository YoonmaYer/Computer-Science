#include <iostream>
using namespace std;

class Rectangle {
public:
	int width, height; //멤버 변수
	int calcArea() {
		return width * height; // 반환 함수
	}
};

int main()
{
	Rectangle obj;

	obj.width = 3;
	obj.height = 4;
	int area = obj.calcArea();
	cout << "사각형의 넓이: " << area << endl;
	return 0;
}