#include <iostream>

using namespace std;

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int cpy[10] = { 0, };

	for (int i : cpy)
		cout << i << endl;

	memcpy(cpy, arr, sizeof(cpy));

	for (int i : cpy)
		cout << i << endl;

	return 0;
}