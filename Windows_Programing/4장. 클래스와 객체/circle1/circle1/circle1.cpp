#include <iostream>
using namespace std;

class Circle { // 클래스 정의
public:
	int radius;
	string color;

	double calcArea() {
		return 3.14 * radius * radius;
	}
};

int main()
{
	Circle obj; // 객체 생성

	obj.radius = 100;
	obj.color = "blue";

	cout << "원의 면적=" << obj.calcArea() << "\n";
	return 0;
}