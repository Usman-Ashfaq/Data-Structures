#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
//finding the middle
Node* middle(Node* head) {
    Node* slow = head;
    Node* fast = head->next;
    while (fast != NULL && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;

    }
    return slow;
}

// finding reverse
Node* reverseLinkedList(Node* head) {
    Node* prev = nullptr;
    Node* curr = head;
    Node* next = nullptr;

    while (curr != nullptr) {
        next = curr->next;  // Store next node
        curr->next = prev;  // Reverse current node's pointer
        prev = curr;        // Move prev to current node
        curr = next;        // Move current to next node
    }

    return prev;  // New head of reversed list
}
bool palindrome(Node* head) {
    if (head == NULL)
        return true;
    Node* midle = middle(head);
    Node* second = reverseLinkedList(midle -> next);
    Node* first = head;
    while (second != nullptr) {
        if (first->data != second->data) {
            return false;
        }
        first = first->next;
        second = second->next;
    }
    return true;
}


// Function to print linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
