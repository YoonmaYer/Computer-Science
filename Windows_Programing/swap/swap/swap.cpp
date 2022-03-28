#include <stdio.h>


void swap(int& x, int& y, int& z, int& o)
{
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
	int sos;
	sos = z;
	z = o;
	o = sos;
	
}

int main()
{
	int a = 100, b = 200, c = 300, d = 400;

	printf("a=%d b=%d c=%d d=%d\n", a, b, c, d);
	swap(a, b, c, d);
	printf("a=%d b=%d c=%d d=%d\n", a, b, c, d);
	swap(a, b, c, d);
	printf("a=%d b=%d c=%d d=%d\n", a, b, c, d);
	swap(a, b, c, d);
	printf("a=%d b=%d c=%d d=%d\n", a, b, c, d);

	return 0;
}