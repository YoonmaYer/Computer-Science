// 반복을 이용한 게임 프로그램
#include <iostream>
using namespace std;

int main()
{
	srand(time(NULL));

	int answer = rand() % 100; // 정답
	int guess;
	int tries = 0;
	// 반복구조
	do {
		cout << "정답을 추측하여 보시오";
		cin >> guess;
		tries++;

		if (guess > answer)			// 사용자가 입력한 정수가 정답보다 높으면
			cout << "제시한 정수보다 높습니다.\n";
		if (guess < answer)			// 사용자가 입력한 정수가 정답보다 낮으면
			cout << "제시한 정수가 낮습니다.\n";
	} while (guess != answer);

	cout <<  "축하합니다. 시도 횟수=" << tries << endl;

	return 0;
}