#include <iostream>
using namespace std;

int square(int n);
int main()
{
	int result;
	result = square(5);
	printf("%d \n", result);
}

int square(int n)
{
	return(n * n);
}