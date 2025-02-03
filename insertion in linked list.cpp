#include<iostream>
using namespace std;
struct Node {
	int data;
	Node* next;
};
class linkedlist {
	Node* head;
public:
	linkedlist() {
		head = nullptr;
	}
	//function to insert value on starting
    void insertbegin(int value) {
		Node* newNode = new Node();
		newNode->data = value;
		newNode->next = head;
		head = newNode;
	}
	//function to insert value on end
	void insertend(int value) {
		Node* newNode = new Node();
		newNode->data = value;
		newNode->next = nullptr;
		if (head == nullptr) {
			head = newNode;
			return;
		}
		Node* temp = head;
		while (temp->next) {
			temp = temp->next;
		}
		temp->next = newNode;
	}
	//function to print the linked list
	void show() {
		Node* temp = head;
		while (temp) {
			cout << temp->data << " -> ";
			temp = temp->next;
		}
		cout << "NULL" << endl;
	}
	//function to indert element at desired place of user
	void desire(int value, int position) {
		if (position == 1) {
			insertbegin(value);
			return;
		}
		Node* newNode = new Node();
		newNode->data = value;
		Node* temp = head;
		for (int i = 0; i < position - 1 && temp;i++) {
			temp = temp->next;
		}
		if (!head) {
			cout << "Out of range!\n";
			delete newNode;
			return;
		}

		newNode->next = temp->next;
		temp->next = newNode;
	}
};
//main function
int main() {
	linkedlist link;
	link.insertbegin(50);
	link.show();
	link.insertend(33);
	link.show();
	link.desire(12, 1);
	link.show();

	system("pause");
	return 0;
}