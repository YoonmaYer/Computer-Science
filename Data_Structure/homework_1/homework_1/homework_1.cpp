#include <iostream>
using namespace std;

struct Node {
	int data;
	struct Node* link;
};

struct HeadNode {
	Node* head;
};

void add();
void del();
void search();
void print();

int Main() {
	char n;
	
	while (1) {
		cout << "1. 노드 추가";
		cout << "2. 노드 삭제";
		cout << "3. 노드 검색";
		cout << "4. 노드 출력";
		cout << "5. 종료";

		n = getchar();

		switch (n) {
		case '1':
				add();
				break;
		case '2':
			del();
			break;
		case '3':
			search();
			break;
		case '4':
			print();
			break;
		case '5':
			cout << "프로그램을 종료합니다.";
			return 0;
		}
	}
}

class Singlist {

public:
	/*리스트 생성, 헤드노드 */
	HeadNode* createList() {
		HeadNode* H = new HeadNode; // HeadNode를 가리키는 포인터, H
		H->head = NULL;
		return H;
	}

	/* 리스트의 마지막에 노드 삽입*/
	void add(HeadNode* H, int x) {
		Node* NewNode = new Node;  //새로 만들 노드 
		Node* LastNode; //원래 있던 노드의 마지막 노드
		NewNode->data = x;
		NewNode->link = NULL;

		if (H->head == NULL) { // 리스트가 비어있을 경우
			H->head = NewNode;
			return; 
		}

		LastNode = H->head;   // 리스트가 비어있지 않은 경우에 연결리스트의 가장 처음 노드가 LastNode를 가리키게 한다.
		while (LastNode->link != NULL) LastNode = LastNode->link; // 연결리스트의 마지막 노드를 찾는 과정
		LastNode->link = NewNode; // 마지막 노드를 찾고 while문을 나오면 뒤에 새 노드를 가리키게 한다.
	}

	/* 리스트의 마지막 노드 삭제*/
	void del(HeadNode* H) {
		Node* prevNode;  // 삭제되는 노드의 앞 노드
		Node* delNode;  // 삭제되는 노드

		if (H->head == NULL) return; // 리스트가 빈 경우
		if (H->head->link == NULL) { // 한 개의 노드만 가진 경우
			delete H->head;  // head가 가리키던 메모리 공간을 힙 영역에 반환
			H->head = NULL;  // 헤드 노드의 link 부분인 head를 null로 설정.
			return;
		}
		else {  // 리스트에 노드 여러 개 있는 경우
			prevNode = H->head; // 헤드 노드가 가리키는 노드가 prevNode가 되게 설정
			delNode = H->head->link; // prevNode 다음 위치로 delNode 설정
			while (delNode->link != NULL) { //delNode가 마지막노드가 될 때까지
				prevNode = delNode;       // prevNode를 한칸씩 가고
				delNode = prevNode->link; // delNode도 한칸씩 끝으로 간다.
			}
			free(delNode);  // 마지막 노드의 메모리 공간을 반환
			prevNode->link = NULL;
		}
	}



	/* 리스트의 특정 노드 검색*/
	void search(HeadNode* H, int thisdata) {
		Node* someNode;
		someNode = H->head;

		while (someNode->data != thisdata) {
			someNode = someNode->link;
		}
		cout << thisdata << " 데이터를 검색하는 데 성공했습니다." << endl;
	}

	/* 연결리스트 출력*/
	void print(HeadNode* L) {
		//노드 순서대로 리스트 출력
		Node* p;
		cout << "연결리스트 목록 = ( ";
		p = L->head;

		while (p != NULL) {
			cout << p->data;
			p = p->link;
			if (p != NULL) cout << " --> ";
		}
		cout << " )" << endl;
	}
};