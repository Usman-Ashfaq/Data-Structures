#include<iostream>
using namespace std;
//struct containing data and Node type pointer
struct Node {
	int data;
	Node* next;
};
//traversing thr whole linked list
void traverse(Node* head) {
	Node* temp = head;
	while (temp != nullptr) {
		cout << temp->data << " ->";
		temp = temp->next;
	}
	cout << " Null\n";
}
//function to find the specific element in the linked list 
//in this case 20 is to be find
bool search(Node* head, int value) {
	Node* temp = head;
	while (temp != nullptr) {
		if (temp->data == value) {
			return true;
		}
		temp = temp->next;

	}
	return false;
}
//main driver function
int main() 
{
	Node* head = new Node();
	Node* second = new Node();
	Node* third = new Node();
	head->data = 10;
	head->next = second;
	second->data = 20;
	second->next = third;
	third->data = 30;
	third->next = nullptr;
	int  searchValue = 20; // Another value to search
	if (search(head, searchValue)) {
		cout << searchValue << " is found in the list!" << endl;
	}
	else {
		cout << searchValue << " is not found in the list!" << endl;
	}
	traverse(head);
	// Clean up the memory
	delete head;
	delete second;
	delete third;
	system("pause");
	return 0;


}