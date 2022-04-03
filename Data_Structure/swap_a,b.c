#include <stdio.h>

void swap(int*a_a,int*b_a){
	int temp=*b_a;
	*b_a=*a_a;
	*a_a=temp;
} 

void main(){
	int a=10, b=20;
	swap(&a,&b);
	printf("%d %d",a,b); // 20, 10
}
