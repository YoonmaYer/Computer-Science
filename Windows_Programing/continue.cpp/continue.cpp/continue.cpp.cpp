#include <iostream>
using namespace std;

int main()
{
	int i = 0;
	do {
		i++;
		cout << "continue 문장 전에 있는 문장" << endl;
		continue; // 다음 코드를 건너 뛴다.
		cout << "continue 문장 후에 있는 문장" << endl;
		cout << "기타기타" << endl;
	} while (i < 3);
	return 0;
}