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
	
	HeadNode* createList() {
		HeadNode* H = new HeadNode;
		H->head = NULL;
		return H;
	}

	void add(HeadNode* H, int x) {
		Node* NewNode = new Node; 
		Node* LastNode;
		NewNode->data = x;
		NewNode->link = NULL;

		if (H->head == NULL) {
			H->head = NewNode;
			return; 
		}

		LastNode = H->head;
		while (LastNode->link != NULL) LastNode = LastNode->link;
		LastNode->link = NewNode;
	}

	void del(HeadNode* H) {
		Node* prevNode;
		Node* delNode;

		if (H->head == NULL) return;
		if (H->head->link == NULL) {
			delete H->head;
			H->head = NULL;
			return;
		}
		else {
			prevNode = H->head;
			delNode = H->head->link;
			while (delNode->link != NULL) {
				prevNode = delNode;
				delNode = prevNode->link;
			}
			free(delNode);
			prevNode->link = NULL;
		}
	}

	void search(HeadNode* H, int thisdata) {
		Node* someNode;
		someNode = H->head;

		while (someNode->data != thisdata) {
			someNode = someNode->link;
		}
		cout << thisdata << " 데이터를 검색하는 데 성공했습니다." << endl;
	}

	void print(HeadNode* L) {
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