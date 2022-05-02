#include <stdio.h>
#include <stdlib.h>

typedef struct node{ // 노드 타입 
	int data;
	struct node* next;
	struct node* pre;
}Listnode;

Listnode* start = NULL; // 초기화 
Listnode* cur - start;

void insert(int d);
void deletelist(int d);
void print();
void delNode();

int main(void)
{
	int select=0;
	int a;
	
	do{	
	printf("1. 노드 추가\n");
	printf("2. 노드 삭제\n");
	printf("3. 노드 출력\n");
	printf("4. 종료\n");
	printf("==================\n");
	printf("메뉴를 선택하세요.\n")
	scanf("%d", &select);
		switch(select)
		{
			case 1:
				if(cur!=NULL);
				printf("숫자를 입력해주세요 : ");
				fflush(stdin);
				scanf("%d", &a);
				insert(a);
				break;
			case 2:
				if(cur!=NULL);
				printf("지우실 숫자를 입력해주세요 : ");
				scanf("%d", &a);
				deletelist(a);
				break;	
			case 3:
				pirnt();
				break;
			case 4:
				printf("프로그램을 종료합니다.\n") 
			default:
				printf("잘못된 입력입니다.\n");
				break;		
				}
		fflush(stdin);
		system("pause");
		system("cls");
		}while(true);
		return 0;
 }
 
 void insert(int data)
 {
 	Listnode *newnode;
 	newnode = (Listnode*)malloc(sizeof(Listnode));
 	newnode-> data = d;
 	newnode -> next = NULL;
 	newnode -> pre = NULL;
 	
 	if(start==NULL)
 	{
 		start = cur = newnode;
 		return;
	 }
	 
	 if(cur->data < d)
	 {
	 	while(cur->pre != NULL)
	 	{
	 		if(cur->pre->data > d)
	 		{
			newnode->next = cur;
	 		newnode->pre = cur->pre;
	 		cur->pre->next = newnode;
	 		cur->pre = newnode;
	 		return;
		 }
		 cur = cur->pre;
	 }
	 newnode->next= cur;
	 cur->pre = newnode;
	 start = newnode;
 }
 else if(cur->data > = d)
 {
 	while(cur->next != NULL)
 	{
 		if(cur->next->data < d)
 		{
 			newnode->next = cur->next;
 			newnode->pre = cur;
 			cur->next->pre = newnode;
 			cur->next = newnode;
 			return;
		 }
		 cur = cur->next;
	 }
	 newnode->pre = cur;
	 cur -> next = newnode;
 }
}

void print()
{
	Listnode* current;
	if(start==NULL)
	{
		printf("데이터가 없습니다.\n");
		return;
	}
	current=start;
	printf("노드를 출력합니다.\n");
	
	while(current->next != NULL)
	{
		printf("[%d] -> ", current->data);
		current = current->next;
	}
	printf("[%d]\n", current->data;)
}

void deletelist(int d)
{
	if(start==NULL)
	{
		printf("데이터가 없습니다.\n");
		return;
	}

	if(cur->data > d)
	{
		while(cur != NULL && cur->data != d)
			cur = cur->next;
	}
	else if(cur->data < d)
	{
		while(cur != NULL && cur->data != d)
			cur = cur->pre;
	}

	if(cur->data == d) // cur이 맨처음이나 맨마지막에 도달했을때
	{
		delNode();
	}
	else
		printf("연결리스트에 입력하신 숫자가 없습니다.\n");
}
void delNode()
{
	DNODE* del;
	del = cur;
	if(cur->next != NULL)
		cur->next->pre = cur->pre;
	if(cur->pre != NULL)
		cur->pre->next = cur->next;

	if(start==cur)
		start = cur->next;

	if(cur->pre!=NULL)
		cur=cur->pre;
	else
		cur=cur->next;
	
	free(del);
}
