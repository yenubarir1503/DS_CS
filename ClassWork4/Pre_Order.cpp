#include <iostream>
using namespace std;

// Definition of a binary tree node
struct Node {
    int data;
    struct Node* left, * right;
};

// Function to create a new node with the given data
Node* newNode(int data) {
    Node* temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

// Recursive function to print binary tree in preorder traversal
void printTreePreorder(Node* root) {
    // Base case: if the current node is NULL, return
    if (root == NULL)
        return;
    
    // Print the data of the current node
    cout << root->data << " ";
    
    // Recursively traverse the left subtree
    printTreePreorder(root->left);
    
    // Recursively traverse the right subtree
    printTreePreorder(root->right);
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

    // Print the binary tree using preorder traversal
    cout << "Binary Tree (Preorder traversal):" << endl;
    printTreePreorder(root);

    return 0;
}
