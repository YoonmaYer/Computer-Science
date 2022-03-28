#include <iostream>
using namespace std;

int main()
{
	const int STUDENTS = 10; // 배열의 크기를 상수로 정의
	int scores[STUDENTS];
	int sum = 0;
	int i, average;

	for (i = 0; i < STUDENTS; i++) // 초기식, 조건식, 증감식
	{
		cout << "학생들의 성적을 입력하시오";
		cin >> scores[i];
	}

	for (i = 0; i < STUDENTS; i++)
		sum += scores[i];

	average = sum / STUDENTS;
	cout << "성적 평균= " << average << endl;

	return 0;
}