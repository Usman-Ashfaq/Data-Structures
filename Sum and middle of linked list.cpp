#include<iostream>
using namespace std;
struct Node {
	int data;
	Node* next;
	Node(int val) {
		this->data = val;
		this->next = nullptr;
	}
};
//function to find the length
int length(Node* head) {
	int len = 0;
	while (head) {
		len++;
		head = head->next;
	}
	return len;

}
//function to find the middle element
int middle(Node* head) {
	int size=length(head);
	int mid = size / 2;
	while (mid--) {
		head = head->next;
	}
	return head->data;
}
//function to find the sum
int sum(Node* head) {
	int sum = 0;
	while (head) {
		sum = sum + head->data;
		head = head->next;
	}
	return sum;

}
//function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) { 
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}


//main function
int main() {
	Node* head = new Node(10);
	head->next = new Node(20);
	head->next->next = new Node(30);
	head->next->next->next = new Node(40);
	head->next->next->next->next = new Node(50);
	cout << "Linked list:  "; 
	printList(head);
	cout << endl;
	cout << "Length: " << length(head) << endl;
	cout << "Middle: " << middle(head) << endl;
	cout << "Sum: " << sum(head) << endl;

	system("pause");
	return 0;
}