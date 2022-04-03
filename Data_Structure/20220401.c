// 단일 연결리스트 
#include <stdio.h>

// 노드 정의  
typedef struct node {
	int value;
	struct node* next; // 다음 노드를 가리키는 포인터 
} NODE;

NODE* start = NULL; // 시작 노드를 가리키는 포인터 
int value = 1;

void insert(void);
void delete(void);
void insert_end(NODE* new_node);

int main(void)
{
	int sel;
	
	while (1)
	{
		printf("<메뉴>\n");
		printf("1. insert\n");
		printf("2. delete\n");
		printf("3. print\n");
		printf("0. end\n"); 
		printf("===============\n");
		scanf("%d",sel); // 사용자 선택 
		
		switch (sel)
		{
			case 0:
				return 0;
			case 1:
				insert();
				break;
				case 2:
					delete();
					break;
					case 3:
						print();
						break;
					default:
						printf("잘못된 입력입니다.\n");
		}
	}

	 }
	return 0;
}
void print(void)
{
	NODE* cur = NULL:
		
		for(cur = start; cur !=NULL; cur = cur->next)
		{
			printf("%d->", cur->value);
		}
}
void insert(void) 
{
	
		NODE* cur = NULL; // 현재 노드를 가리키는 포인터 
	NODE* new_node = NULL; // 새로 생성된 노드를 가리키는 포인터
	
		if(start==NULL) // 공백리스트일때 
	{
		new_node = (NODE*)malloc(sizeof(NODE)); // 노드 생성, 메모리 할당
		new_node->next = NULL; // 포인터 초기화 
		new_node->value = value ++;
		start = new_node; // 시작지점으로 설정 
	 } 
	 else
	 {
	 	new_node = (NODE*)malloc(sizeof(NODE)); // 노드 생성, 메모리 할당
		new_node->next = NULL; // 포인터 초기화 
		for(cur=start; cur->next !=NULL; cur=cur->next;) //  cur가 마지막 노드를 가리키게 함 
		insert_end(cur, new_node);
}

// 마지막지점 삽입 함수  
void insert_end(NODE* end, NODE* new_node)
{
	end->next = new_node;
}

// 시작지점 삽입 함수  
void insert_start(NODE* new_node)
{
	
}

// 중간지점 삽입 함수
void insert_mid(NODE* mid, NODE*) 
{
	
}
