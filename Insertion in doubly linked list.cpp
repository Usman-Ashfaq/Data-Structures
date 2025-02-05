#include <iostream>
using namespace std;
//node class can be made struct
class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int value) {
        data = value;
        prev = next = NULL;
    }
};

// Insert at the beginning
void insertAtBeginning(Node*& head, int value) {
    Node* newNode = new Node(value);
    if (head != NULL) {
        newNode->next = head;
        head->prev = newNode;
    }
    //if condition is not true then this condition will run
    head = newNode;
}

// Insert at the end
void insertAtEnd(Node*& head, int value) {
    Node* newNode = new Node(value);
    if (head == NULL) {
        head = newNode;
        return;
    }
    //traversing
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    //insertion
    temp->next = newNode;
    newNode->prev = temp;
}

// Insert at a specific position (1-based index)
void insertAtPosition(Node*& head, int value, int position) {
    if (position == 1) {
        insertAtBeginning(head, value);
        return;
    }

    Node* newNode = new Node(value);
    Node* temp = head;
    int count = 1;

    while (temp != NULL && count < position - 1) {
        temp = temp->next;
        count++;
    }

    if (temp == NULL) {
        cout << "Invalid position!" << endl;
        return;
    }

    newNode->next = temp->next;
    if (temp->next != NULL) {
        temp->next->prev = newNode;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

// Print the doubly linked list
void printList(Node* head) {
    Node* temp = head;
    cout << "Doubly Linked List: ";
    while (temp != NULL) { 
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
//main fucntion
int main() {
    Node* head = NULL;

    insertAtBeginning(head, 10);
    insertAtBeginning(head, 20);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40);
    insertAtPosition(head, 25, 3); // Insert 25 at position 3
   //printing
    printList(head);
    system("pause");
    return 0;
}
