#include <iostream>
#include <string>
using namespace std;

// Node structure for the binary tree
struct TreeNode {
    string data; // Data for routing entry (e.g., destination, next hop)
    TreeNode* left; // Pointer to the left child
    TreeNode* right; // Pointer to the right child
};

// Function to create a new node
TreeNode* createNode(string data) {
    TreeNode* newNode = new TreeNode;
    newNode->data = data;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

// Function to insert a node into the binary tree
TreeNode* insertNode(TreeNode* root, string data) {
    if (root == nullptr) {
        return createNode(data); // Create a new node if the root is null
    } else {
        // Insert data into the left subtree if it's smaller, otherwise into the right subtree
        if (data < root->data) {
            root->left = insertNode(root->left, data);
        } else {
            root->right = insertNode(root->right, data);
        }
        return root;
    }
}

// Function to print the binary tree in an inorder traversal
void printTree(TreeNode* root) {
    if (root != nullptr) {
        printTree(root->left); // Print the left subtree
        cout << root->data << " "; // Print the root
        printTree(root->right); // Print the right subtree
    }
}

int main() {
    TreeNode* root = nullptr; // Initialize the root of the binary tree
    int size;
    cout << "Enter the size of the routing table: ";
    cin >> size; // Input the size of the routing table

    // Input data for each routing entry and insert into the binary tree
    for (int i = 0; i < size; ++i) {
        string routingEntry;
        cout << "Enter data for routing entry " << i + 1 << ": ";
        cin >> routingEntry;
        root = insertNode(root, routingEntry); // Insert the routing entry into the binary tree
    }

    // Print the binary tree representing the routing table
    cout << "Routing Table (Binary Tree Representation):" << endl;
    printTree(root);
    cout << endl;

    return 0;
}
