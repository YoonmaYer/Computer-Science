#include <stdio.h>

void main()
{
	int num=10;
	int*ptr; // 포인터 선언  
	
	ptr=&num; // 포인터에 num 값 대입 ptr = num 
	printf("포인터 ptr이 가리키는 값:%d\n",*ptr);
	printf("num에 저장된 값:%d\n\n",num); // 10 
	
	*ptr=20;
	printf("포인터 ptr이 가리키는 값:%d\n",*ptr);
	 printf("num에 저장된 값:%d\n\n",num); // 20
	 
	(*ptr)++;
	printf("포인터 ptr이 가리키는 값:%d\n",*ptr);
	printf("num에 저장된 값:%d\n\n",num); // 10 
	
}
