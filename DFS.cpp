#include <iostream>

using namespace std;
//making class node
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
//making class tree
class Tree {
public:
    void Preorder(Node* root) {
        if (root) {
            cout << root->data << " ";  
            Preorder(root->left);       
            Preorder(root->right);      
        }
    }

    void Inorder(Node* root) {
        if (root) {
            Inorder(root->left);       
            cout << root->data << " "; 
            Inorder(root->right);      
        }
    }

    void Postorder(Node* root) {
        if (root) {
            Postorder(root->left);     
            Postorder(root->right);    
            cout << root->data << " "; 
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
