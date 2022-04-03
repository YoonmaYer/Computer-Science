#include <stdio.h>
#include <stdlib.h>

struct ListNode {
	int data;
	struct ListNode *link;
}; ListNode;

ListNode *p1;
p1 = (ListNode *)malloc(sizeof(ListNode));

p1->data = 10;
p1->link = NULL;

printf(*p1);
