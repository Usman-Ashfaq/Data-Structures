#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

//  delete a node at a specific position
void deleteNode(Node*& head, int position) {
    if (head == NULL) {  // If list is empty
        cout << "List is empty!\n";
        return;
    }

    Node* temp = head;


    if (position == 0) {
        head = temp->next;  // Move head to the next node
        delete temp;  // Free memory
        return;
    }

    // Find the previous node of the node to be deleted
    for (int i = 0; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }

    // If position is out of bounds
    if (temp == NULL || temp->next == NULL) {
        cout << "Invalid position!\n";
        return;
    }

    // Node to be deleted
    Node* toDelete = temp->next;
    temp->next = toDelete->next;  // Unlink the node

    delete toDelete;  
}

// Function to insert a new node at the end
void insert(Node*& head, int data) {
    Node* newNode = new Node{ data, NULL };
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) temp = temp->next;
    temp->next = newNode;
}

// Function to display the linked list
void display(Node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main() {
    Node* head = NULL;

    // Insert some nodes
    insert(head, 10);
    insert(head, 20);
    insert(head, 30);
    insert(head, 40);
    insert(head, 50);

    cout << "Original List: ";
    display(head);

    // Delete node at position 2 (0-based index)
    deleteNode(head, 2);

    cout << "After Deletion: ";
    display(head);

    return 0;
}
