#include <iostream>
using namespace std;

int main()
{
	int money;
	int candy_price;
	cout << "현재 가지고 있는 돈: ";
	cin >> money;
	
	cout << "캔디의 가격: ";
	cin >> candy_price;

	// 최대한 살 수 있는 사탕 수
	int n_candies = money / candy_price;
	cout << "최대로 살 수 있는 캔디의 개수= " << n_candies << endl;

	// 사탕을 구입하고 남은 돈
	int change = money % candy_price;
	cout << "캔디 구입 후 남은 돈= " << change << endl;
	return 0;
}