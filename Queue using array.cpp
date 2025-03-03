//#include <iostream>
//
//using namespace std;
//
//// Define a class for a linked list node
//class Node {
//public:
//    int data;    
//    Node* next;  
//    // Constructor for node
//    Node(int value) {
//        data = value;
//        next = nullptr;
//    }
//};
//
//// Define a class for the linked list
//class LinkedList {
//private:
//    Node* head; 
//
//public:
//    // Constructor for linked list
//    LinkedList() {
//        head = nullptr;
//    }
//
//    // Function to create a new node
//    Node* createNode(int value) {
//        Node* newNode = new Node(value);
//        return newNode;
//    }
//
//    // Function to insert a node at the beginning of the list
//    void insertAtBeginning(int value) {
//        Node* newNode = createNode(value);
//        if (head == nullptr) {
//            head = newNode;
//        }
//        else {
//            newNode->next = head;
//            head = newNode;
//        }
//    }
//
//    // Function to insert a node at the end of the list
//    void insertAtEnd(int value) {
//        Node* newNode = createNode(value);
//        if (head == nullptr) {
//            head = newNode;
//        }
//        else {
//            Node* temp = head;
//            while (temp->next != nullptr) {
//                temp = temp->next;
//            }
//            temp->next = newNode;
//        }
//    }
//
//    // Function to delete the first node from the list
//    void deleteFirstNode() {
//        if (head == nullptr) {
//            cout << "The list is already empty." << endl;
//            return;
//        }
//        Node* temp = head;
//        head = head->next;
//        delete temp;
//    }
//
//    // Function to search for a value and print its position
//    void searchAndPrint(int value) {
//        Node* temp = head;
//        int position = 0;
//        while (temp != nullptr) {
//            if (temp->data == value) {
//                cout << "Value " << value << " is at position " << position << "." << endl;
//                return;
//            }
//            temp = temp->next;
//            position++;
//        }
//        cout << "Your entered value "<< value <<  " not found." << endl;
//    }
//
//    // Function to print the entire list
//    void printList() {
//        Node* temp = head;
//        if (temp == nullptr) {
//            cout << "The list is empty." << endl;
//            return;
//        }
//        while (temp != nullptr) {
//            cout << temp->data << " -> ";
//            temp = temp->next;
//        }
//        cout << "Null" << endl;
//    }
//};
//
//// Sample usage of the linked list class
//int main() {
//    LinkedList list;
//
//    // Insert nodes at the beginning
//    list.insertAtBeginning(10);
//    list.insertAtBeginning(20);
//    list.insertAtBeginning(30);
//
//    // Print the list
//    cout << "List after inserting nodes at the beginning:" << endl;
//    list.printList();
//
//    // Insert nodes at the end
//    list.insertAtEnd(40);
//    list.insertAtEnd(50);
//
//    // Print the list
//    cout << "List after inserting nodes at the end:" << endl;
//    list.printList();
//
//    // Search for a value
//    list.searchAndPrint(30);
//    list.searchAndPrint(100);
//
//    // Delete the first node
//    list.deleteFirstNode();
//
//    // Print the list
//    cout << "List after deleting the first node:" << endl;
//    list.printList();
//
//    system("pause");
//    return 0;
//}