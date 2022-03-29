#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Example {
	int number;
	char name[10];
};
void main() {
	struct Example *p; 
	p=(struct Example*)malloc(2*sizeof(struct Example)); // 동적메모리 할당 
	if(p==NULL){ // p가 null이면  
		fprintf(stderr, "can't allocate memory\n'");
		exit(1); 
	}
	p->number=1;
	strcpy(p->name,"Park");
	(p+1)->number=2;
	strcpy((p+1)->name,"Kim");
	printf("%d\n",*p); // 6487552
	
	return 0;
}
