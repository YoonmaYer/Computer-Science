// ���� ���Ḯ��Ʈ 
#include <stdio.h>

// ��� ����  
typedef struct node {
	int value;
	struct node* next; // ���� ��带 ����Ű�� ������ 
} NODE;

NODE* start = NULL; // ���� ��带 ����Ű�� ������ 
int value = 1;

void insert(void);
void delete(void);
void insert_end(NODE* new_node);

int main(void)
{
	int sel;
	
	while (1)
	{
		printf("<�޴�>\n");
		printf("1. insert\n");
		printf("2. delete\n");
		printf("3. print\n");
		printf("0. end\n"); 
		printf("===============\n");
		scanf("%d",sel); // ����� ���� 
		
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
						printf("�߸��� �Է��Դϴ�.\n");
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
	
		NODE* cur = NULL; // ���� ��带 ����Ű�� ������ 
	NODE* new_node = NULL; // ���� ������ ��带 ����Ű�� ������
	
		if(start==NULL) // ���鸮��Ʈ�϶� 
	{
		new_node = (NODE*)malloc(sizeof(NODE)); // ��� ����, �޸� �Ҵ�
		new_node->next = NULL; // ������ �ʱ�ȭ 
		new_node->value = value ++;
		start = new_node; // ������������ ���� 
	 } 
	 else
	 {
	 	new_node = (NODE*)malloc(sizeof(NODE)); // ��� ����, �޸� �Ҵ�
		new_node->next = NULL; // ������ �ʱ�ȭ 
		for(cur=start; cur->next !=NULL; cur=cur->next;) //  cur�� ������ ��带 ����Ű�� �� 
		insert_end(cur, new_node);
}

// ���������� ���� �Լ�  
void insert_end(NODE* end, NODE* new_node)
{
	end->next = new_node;
}

// �������� ���� �Լ�  
void insert_start(NODE* new_node)
{
	
}

// �߰����� ���� �Լ�
void insert_mid(NODE* mid, NODE*) 
{
	
}
