#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

class Tree {
public:
    void Preorder(Node* root) {
        if (root) {
            cout << root->data << " ";  // Visit Root
            Preorder(root->left);      // Visit Left
            Preorder(root->right);     // Visit Right
        }
    }

    void Inorder(Node* root) {
        if (root) {
            Inorder(root->left);       // Visit Left
            cout << root->data << " "; // Visit Root
            Inorder(root->right);      // Visit Right
        }
    }

    void Postorder(Node* root) {
        if (root) {
            Postorder(root->left);     // Visit Left
            Postorder(root->right);    // Visit Right
            cout << root->data << " "; // Visit Root
        }
    }
};

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    Tree tree;
    cout << "Preorder Traversal: ";
    tree.Preorder(root);
    cout << endl;

    cout << "Inorder Traversal: ";
    tree.Inorder(root);
    cout << endl;

    cout << "Postorder Traversal: ";
    tree.Postorder(root);
    cout << endl;

    system("pause");
    return 0;
}
