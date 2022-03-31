﻿#include <iostream>
using namespace std;

class Circle { // 클래스 선언
public:
	int radius;
	string color;

	double calcArea() {
		return 3.14 * radius * radius;
	}
};

int main()
{
	Circle pizza1, pizza2, pizza3;

	pizza1.radius = 100;
	pizza1.color = "yellow";
	cout << "피자의 면적=" << pizza1.calcArea() << "\n";

	pizza2.radius = 200;
	pizza2.color = "white";
	cout << "피자의 면적=" << pizza2.calcArea() << "\n";

	pizza3.radius = 300;
	pizza3.color = "black";
	cout << "피자의 면적=" << pizza3.calcArea() << "\n";
	return 0;
}