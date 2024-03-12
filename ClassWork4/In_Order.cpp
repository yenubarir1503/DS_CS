#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node* left, * right;
};

Node* newNode(int data) {
    Node* temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

// Recursive function to print binary tree in inorder traversal
void printTreeInorder(Node* root) {
    if (root == NULL)
        return;
    printTreeInorder(root->left); // Traverse left subtree
    cout << root->data << " "; // Print current node
    printTreeInorder(root->right); // Traverse right subtree
}

int main() {
    // Construct the binary tree
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->left->right->left = newNode(9);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->right->right->left = newNode(15);

    // Print the binary tree using inorder traversal
    cout << "Binary Tree (Inorder traversal):" << endl;
    printTreeInorder(root);

    return 0;
}
