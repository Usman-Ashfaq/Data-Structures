//#include<iostream>
//using namespace std;
//struct Node {
//	int data;
//	Node* next;
//	Node(int val) : data(val), next(nullptr) {}
//};
//class List {
//	Node* head;
//public:
//	List() : head(nullptr) {}
//	void insert(int val) {
//		Node* newNode = new Node(val);
//		newNode ->next = head;
//		head = newNode;
//	}
//	//function to arrange od first and even then
//	void setting() {
//		if (head == NULL || head->next == NULL) {
//			return;
//		}
//		Node* oddindex = head;
//		Node* evenindex = head->next;
//		Node* evenhead = evenindex;
//		while (evenindex != NULL && evenindex->next != NULL) {
//			oddindex->next = evenindex->next;
//			oddindex = oddindex->next;    //movind odd to next node
//
//			evenindex->next = oddindex->next;
//			evenindex = evenindex->next;   //moving even to next node
//
//		}
//		oddindex->next = evenhead;
//
//
//	}
//// Print the doubly linked list
//    void printList() {
//    Node* temp = head;
//    while (temp != NULL) { 
//        cout << temp->data << " -> ";
//        temp = temp->next;
//    }
//    cout << "NULL" << endl;
//    }
//};
//int main() {
//	List list;
//	list.insert(1);
//	list.insert(2);
//	list.insert(3);
//	list.insert(4);
//	list.insert(5);
//	cout << "Given: ";
//	list.printList();
//	cout << "After rearraging: ";
//	list.setting();
//	list.printList();
//
//	system("pause");
//	return 0;
//}
