#include <iostream>
using namespace std;

struct Node {
/   int data;
/   Node* left;
/   Node* right;
/   int height;
};

//Node* createNode(int data) {
//    Node* newNode = new Node;
//    newNode->data = data;
//    newNode->left = nullptr;
//    newNode->right = nullptr;
//    newNode->height = 1;
//    return newNode;
//}
//
//void inorderTraversal(Node* root) {
//    if (root == nullptr) {
//        return;
//    }
//    inorderTraversal(root->left);
//    cout << root->data << " ";
//    inorderTraversal(root->right);
//}
//
//// Function to check if a tree is a valid BST
//bool is_valid_bst(Node* root, Node* minNode, Node* maxNode) {
//    if (root == nullptr) {
//        return true;
//    }
//
//    if ((minNode && root->data <= minNode->data) ||
//        (maxNode && root->data >= maxNode->data)) {
//        return false;
//    }
//
//    return is_valid_bst(root->left, minNode, root) &&
//        is_valid_bst(root->right, root, maxNode);
//}
//
//bool isBST(Node* root) {
//    return is_valid_bst(root, nullptr, nullptr);
//}
//
//int height(Node* node) {
//    if (node == nullptr) {
//        return 0;
//    }
//    return node->height;
//}
//
//// Function to check if a tree is an AVL tree
//bool isAVL(Node* root) {
//    if (root == nullptr) {
//        return true;
//    }
//    int leftHeight = height(root->left);
//    int rightHeight = height(root->right);
//    int balanceFactor = leftHeight - rightHeight;
//
//    if (balanceFactor > 1 || balanceFactor < -1) {
//        return false;
//    }
//
//    return isAVL(root->left) && isAVL(root->right);
//}
//
//int main() {
//    Node* root = createNode(10);
//    root->left = createNode(5);
//    root->right = createNode(15);
//    root->left->left = createNode(2);
//    root->left->right = createNode(7);
//
//    cout << "Inorder Traversal: ";
//    inorderTraversal(root);
//    cout << endl;
//
//    // check for BST
//    if (isBST(root)) {
//        cout << "The tree is a valid BST." << endl;
//    }
//    else {
//        cout << "The tree is not a valid BST." << endl;
//    }
//
//    // check for AVL tree
//    if (isAVL(root)) {
//        cout << "The tree is a valid AVL tree." << endl;
//    }
//    else {
//        cout << "The tree is not a valid AVL tree." << endl;
//    }
//
//    system("pause");
//    return 0;
//}
