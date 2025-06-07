#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    int height;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
        height = 1;
    }
};

class AVL {
public:
    Node* root;

    AVL() {
        root = nullptr;
    }

    // Get the height of a node
    int getHeight(Node* node) {
        if (node == nullptr)
            return 0;
        else
            return node->height;
    }

    // Get the balance factor of a node
    int getBalance(Node* node) {
        if (node == nullptr)
            return 0;
        else
            return getHeight(node->left) - getHeight(node->right);
    }

    // Right rotation (LL Case)
    Node* rightRotate(Node* y) {
        Node* x = y->left;
        Node* T2 = x->right;

        x->right = y;
        y->left = T2;

        y->height = 1 + max(getHeight(y->left), getHeight(y->right));
        x->height = 1 + max(getHeight(x->left), getHeight(x->right));

        return x;
    }

    // Left rotation (RR Case)
    Node* leftRotate(Node* x) {
        Node* y = x->right;
        Node* T2 = y->left;

        y->left = x;
        x->right = T2;

        x->height = 1 + max(getHeight(x->left), getHeight(x->right));
        y->height = 1 + max(getHeight(y->left), getHeight(y->right));

        return y;
    }

    // Insert into AVL tree
    Node* insert(Node* node, int key) {
        // Step 1: Normal BST insert
        if (node == nullptr) {
            return new Node(key);
        }

        if (key < node->data) {
            node->left = insert(node->left, key);
        }
        else if (key > node->data) {
            node->right = insert(node->right, key);
        }
        else {
            // Duplicate keys not allowed
            return node;
        }

        // Step 2: Update height
        int leftHeight = getHeight(node->left);
        int rightHeight = getHeight(node->right);
        if (leftHeight > rightHeight)
            node->height = leftHeight + 1;
        else
            node->height = rightHeight + 1;

        // Step 3: Get balance factor
        int balance = getBalance(node);

        // Step 4: Balance the tree

        // Case 1: Left Left
        if (balance > 1 && key < node->left->data)
            return rightRotate(node);

        // Case 2: Right Right
        if (balance < -1 && key > node->right->data)
            return leftRotate(node);

        // Case 3: Left Right
        if (balance > 1 && key > node->left->data) {
            node->left = leftRotate(node->left);
            return rightRotate(node);
        }

        // Case 4: Right Left
        if (balance < -1 && key < node->right->data) {
            node->right = rightRotate(node->right);
            return leftRotate(node);
        }

        return node;
    }

    // Wrapper function to insert from outside
    void insert(int key) {
        root = insert(root, key);
    }

    // Inorder traversal (LNR)
    void inorder(Node* node) {
        if (node != nullptr) {
            inorder(node->left);
            cout << node->data << " ";
            inorder(node->right);
        }
    }

    // Display inorder
    void displayInorder() {
        inorder(root);
        cout << endl;
    }
};

int main() {
    AVL tree;

    // Example values: will show rotations like LL, RR, LR, RL
    tree.insert(40);
    tree.insert(30);
    tree.insert(20); // triggers right rotate (LL)
    tree.insert(10);
    tree.insert(5);  // triggers another right rotate
    tree.insert(15); // triggers left-right rotate (LR)
    tree.insert(65);
    tree.insert(33);
    tree.insert(31); // triggers right-left rotate (RL)

    cout << "Inorder Traversal of AVL Tree: ";
    tree.displayInorder();  // Should print in ascending order

    return 0;
}
