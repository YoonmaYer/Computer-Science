#include <iostream>
#include <string>
using namespace std;

class Car {
public:
	// 멤버 변수 선언
	int speed;
	int gear;
	string color;

	// 멤버 함수 선언
	void speedUp() {
		speed += 10;
	}

	void speedDown() {
		speed -= 10;
	}
};

int main()
{
	Car myCar; // 객체 생성

	myCar.speed = 100;
	myCar.gear = 3; // 멤버 변수 접근
	myCar.color = "red";

	myCar.speedUp(); // 멤버 함수 접근
	myCar.speedDown();

	return 0;
}