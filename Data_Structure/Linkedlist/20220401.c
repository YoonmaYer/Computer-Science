#include <stdio.h>
#include <stdlib.h>

//노드 정의
typedef struct node {
	int id;
	struct node* next; // 다음 노트를 가리키는 포인터 
	// struct node* pre; // 이전 노드를 가리키는 포인터 
}; NODE;

NODE* start = NULL; // 시작노드를 가리키는 포인터
int value = 1;

void insert(void);
void delete(void);
void print(void);
void insert_start(NODE* new_node);
void insert_mid(NODE* mid, NODE* new_node);
void insert_end(NODE* end, NODE* new node);
void free_all(void);
void delete_start(void);
void delete_mid(NODE* pre_del);
void delete_end(NODE* pre_del);

int main(void)
{
	int sel;
	
	while (1)
	{
		system("cls");
		printf("<메뉴>\n");
		printf("1. insert\n");
		printf("2. delete\n")'
		printf("3. print\n");
		printf("4. clear\n");
		printf("0. end\n");
		pritnf("=================\n");
		scanf("%d, &sel") // 사용자 선택 
		
		switch (sel)
		{
			case 0:
				free_all();
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
							case4:
								free_all();
								break;
								default:
									prinf("잘못된 입력입니다.\n");
		}
	}
	return 0;
 } 
 
 void print(void)
 {
 	NODE* cur = NULL;
 	
	for (cur = start; cur != NULL; cur = cur->next)
	{
		printf("%d -> ", cur -> id);
	}
	printf("\n");
	getch(); // 사용자 입력 대기(아무키나 누르세요) 
 }
 
 void insert(void)
{
	NODE* cur = NULL; // 현재 노드를 가리키는 포인터 (커서) 
	NODE* new_node = NULL; // 새로 생성된 녿를 가리키는 포인터
	int sel, id;
	
	if(start == NULL) // 제일 처음 생성하는 노드
	{
		new_node = (NODE*)malloc(sizeof(NODE)); // 노드 생성
		new_node->next = NULL; // 포인터 초기화
		new_node->id = value++
		start = new_node; // 시작지점으로 설정 
	 } 
	 else
	 {
	 	printf("1. 시작지점 insert\n");
		printf("2. 마지막지점 insert\n");
		printf("3. 중간지점 insert\n");
		printf("================\n");
		scanf("%d", &sel);
		
		new_node = (NODE*)malloc(sizeof(NODE)); // 노드 생성
		new_node -> next = NULL; // 포인터 초기화
		new_node-> id = value++;
		
		if (sel == 1) // 시작지점에 insert
		{
			insert_start(new_node);
		 } 
		 else if (sel == 2) // 마지막 지점에 insert
		 {
		 	// cur가 마지막 노드를 가리키게 함.
			 for (cur = start; cur->next != NULL; cur->next);
			 insert_end(cur, new_node); 
		  } 
		  else if (sel == 3) // 중간지점에 insert
		  {
		  	print();
		  	printf("어떤 노드 뒤에 insert할지 노드 id를 입력하세요: ");
		  	scanf("%d", &id);
			  // 잘못 입력된 id에 대한 예외처리가 필요함.
			  
			  for (cur = start; cur != NULL; cur = cur->next)
			  {
			  	if (cur->id == id)
			  	break;
			   } 
			   insert_mid(cur, new_node);
		   } 
		   else // 잘못된 입력
		   {
		   	free(new_node);
			   return 0; 
			} 
	 }
 } 
 
 // 마지막지점 삽입 함수
 void insert_start(NODE* new_node)
 {
 	new_node->next = start;
 	start = new_node; // 시작노드 갱신 
  } 
  
// 중간지점 삽입 함수
void insert_mid(NODE* mid, NODE* new_node)
{
	new_node->next = mid->next;
	mid->next = new_node;
 } 
 
 void delete(void)
 {
 	int sel, id;
 	NODE* cur;
 	
 	if (start = NULL) // 노드가 하나도 없음
	 return;
	 else if (start->next == NULL) // 노드가 한 개 있음.
	 {
	 	free(start);
		 start = NULL;
		 return; 
	  } 
	  else if (start->next->next == NULL) // 노드가 두 개 있음. 
	  {
	  	printf("1. 시작지점 delete\n");
		  printf("2. 마지막지점 delete\n");
		  printf("==============\n");
		  scanf("%d", &sel);
		  // 3번 입력이 들어왔을 때에 대한 예외처리가 필요함 
	   } 
	   else // 노드가 3개 이상 있음
	   {
	   	printf("1. 시작지점 delete\n");
		  printf("2. 마지막지점 delete\n");
		  printf("3. 중간지점 delete\n");
		  printf("==============\n");
		  scanf("%d", &sel);
		} 
		if (sel == 1) // 시작지점 노드를 delete
		{
			delete_start();
		 } 
		 else if (sel == 2) // 마지막지점 노드를 delete 
		 {
		 	// cur가 마지막 노드의 전 노드를 가리키게 함.
			 for (cur =start; cur->next->next != NULL; cur = cur->next);
			 delete_end(cur);
		 }
		 else if (sel == 3) // 중간지점에 insert
		 {
		 	print();
		 	printf("delete할 노드 id를 입력하세요: ");
		 	scanf("%d", &id);
		 	// 잘못 입력한 id에 대한 예외처리가 필요함.
			 
			for (cur = start; cur != NULL; cur = cur->next)
			{
				// 삭제할 노드 전 노드를 가리킴.
				if (cur->next->id == id)
				break; 
			 } 
			 delete_mid(cur);
			 
		  } 
		  else // 잘못된 입력 
		  {
		  	return 0; 
		   } 
 }
 
 // 연결리스트 전체 노드 삭제 함수
 void free_all(void)
 {
 	NODE* cur;
 	NODE* del = start;
 	
 	if (start == NULL) // 노드가 하나도 없음
	 return;
	 else if (start->next == NULL) // 노드가 한 개 밖에 없음.
	 {
	 	free(start); 
	  } 
	  else
	  {
	  	for (cur = start->next; cur != NULL; cur = cur ->next)
	  	{
	  		free(del);
	  		del = cur;
		  }
		  free(del);
	  }
	  start = NULL:
  } 

// 시작지점 노드 삭제 함수
void delete_start(void)
{
	NODE* tmp;
	
	tmp = start->next; // 두 번째 노드의 주소값을 백업
	free(start); // 첫 번째 노드 삭제
	start = tmp; // 기존 두 번째 노드를 시작노드로 갱신 
 } 
 
 // 마지막지점 노드 삭제 함수
 void delete_end(NODE* pre_del)
 {
 	free(pre_del->next);
 	pre_del->next = NULL;
  } 

// 중간지점 노드 삭제 함수
void delete_mid(NODE* pre_del)
{
	NODE* del;
	
	del = pre_del->next // 삭제할 노드
	// 삭제할 노드 이전 노드를 삭제할 노드 다음 노드로 이어줌
	pre_del->next = del->next;
	
	free(del); 
 } 
