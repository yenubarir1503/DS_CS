#include <iostream> // We include a library for basic input and output operations
#include <vector> // We include a library for using the vector container
#include <queue> // We include a library for using the queue container
#include <stack> // We include a library for using the stack container
using namespace std; // We use the standard namespace to simplify our code

// Define a class for the dynamic array
class DynamicArray {
private:
    vector<int> data; // We define a vector to store elements of the array

public:
    // Method to insert data into the array
    void insertData(int value) {
        data.push_back(value); // We insert the data at the end of the vector
    }

    // Method to display the array
    void displayData() {
        cout << "Dynamic Array Elements: "; // We print a label for the dynamic array
        for (int num : data) { // We loop through each element in the array
            cout << num << " "; // We print the element followed by a space
        }
        cout << endl; // We print a new line after displaying all elements
    }

    // Method to adjust the size of the array
    void adjustSize() {
        int newSize; // We declare a variable to store the new size of the array
        cout << "Enter the new size of the array: "; // We prompt the user to enter the new size
        cin >> newSize; // We read the user input for the new size
        data.resize(newSize); // We resize the array to the new size
        cout << "Array resized successfully!" << endl; // We print a message indicating successful resizing
    }
};

// Define a class for the linked list
class LinkedList {
private:
    struct Node {
        int data; // Data stored in the node
        Node* next; // Pointer to the next node

        Node(int val) : data(val), next(nullptr) {} // Constructor to initialize node with data
    };

    Node* head; // Pointer to the head of the linked list

public:
    LinkedList() : head(nullptr) {} // Constructor to initialize head pointer to nullptr

    // Method to insert data into the linked list
    void insertData(int value) {
        Node* newNode = new Node(value); // We create a new node with the given data
        if (!head) { // If the linked list is empty
            head = newNode; // We set the new node as the head
        } else { // If the linked list is not empty
            Node* current = head; // We start traversal from the head
            while (current->next) { // We traverse until the last node
                current = current->next; // We move to the next node
            }
            current->next = newNode; // We insert the new node at the end
        }
    }

    // Method to display the linked list
    void displayData() {
        cout << "Linked List Elements: "; // We print a label for the linked list
        Node* current = head; // We start traversal from the head
        while (current) { // We traverse until the end of the list
            cout << current->data << " "; // We print the data of the current node
            current = current->next; // We move to the next node
        }
        cout << endl; // We print a new line after displaying all elements
    }
};

// Define a class for the stack
class CustomStack {
private:
    stack<int> customStack; // We define a stack to store elements

public:
    // Method to push data onto the stack
    void pushData(int value) {
        customStack.push(value); // We push the data onto the stack
    }

    // Method to pop data from the stack
    void popData() {
        if (!customStack.empty()) { // If the stack is not empty
            customStack.pop(); // We pop the top element from the stack
        }
    }

    // Method to display the stack
    void displayData() {
        cout << "Stack Elements: "; // We print a label for the stack
        stack<int> tempStack = customStack; // We create a temporary copy of the stack
        while (!tempStack.empty()) { // We loop until the temporary stack is empty
            cout << tempStack.top() << " "; // We print the top element of the stack
            tempStack.pop(); // We pop the top element from the temporary stack
        }
        cout << endl; // We print a new line after displaying all elements
    }
};

// Define a class for the queue
class CustomQueue {
private:
    queue<int> customQueue; // We define a queue to store elements

public:
    // Method to enqueue data into the queue
    void enqueueData(int value) {
        customQueue.push(value); // We enqueue the data into the queue
    }

    // Method to dequeue data from the queue
    void dequeueData() {
        if (!customQueue.empty()) { // If the queue is not empty
            customQueue.pop(); // We dequeue (remove) the front element from the queue
        }
    }

    // Method to display the queue
    void displayData() {
        cout << "Queue Elements: "; // We print a label for the queue
        queue<int> tempQueue = customQueue; // We create a temporary copy of the queue
        while (!tempQueue.empty()) { // We loop until the temporary queue is empty
            cout << tempQueue.front() << " "; // We print the front element of the queue
            tempQueue.pop(); // We pop the front element from the temporary queue
        }
        cout << endl; // We print a new line after displaying all elements
    }
};

// Define a class for the binary tree
class BinaryTree {
private:
    struct TreeNode {
        int data; // Data stored in the node
        TreeNode* left; // Pointer to the left child node
        TreeNode* right; // Pointer to the right child node

        TreeNode(int val) : data(val), left(nullptr), right(nullptr) {} // Constructor to initialize node with data
    };

    TreeNode* root; // Pointer to the root of the binary tree

    // Private method to insert data into the binary tree
    TreeNode* insertNode(TreeNode* node, int value) {
        if (!node) { // If the current node is nullptr
            return new TreeNode(value); // We create a new node with the given data
        }
        if (value < node->data) { // If the data is less than the current node's data
            node->left = insertNode(node->left, value); // We recursively insert into the left subtree
        } else if (value > node->data) { // If the data is greater than the current node's data
            node->right = insertNode(node->right, value); // We recursively insert into the right subtree
        }
        return node; // We return the modified node
    }

    // Private method to perform inorder traversal of the binary tree
    void inorderTraversal(TreeNode* node) {
        if (node) { // If the current node is not nullptr
            inorderTraversal(node->left); // We traverse the left subtree
            cout << node->data << " "; // We print the data of the current node
            inorderTraversal(node->right); // We traverse the right subtree
        }
    }

public:
    BinaryTree() : root(nullptr) {} // Constructor to initialize root pointer to nullptr

    // Method to insert data into the binary tree
    void insertData(int value) {
        root = insertNode(root, value); // We call the private insert method to insert data into the binary tree
    }

    // Method to display the binary tree
    void displayData() {
        cout << "Binary Tree Elements (Inorder traversal): "; // We print a label for the binary tree
        inorderTraversal(root); // We call the private inorder traversal method to display the binary tree
        cout << endl; // We print a new line after displaying all elements
    }
};

// Main function to interact with the user and test the data structures
int main() {
    cout << "Welcome to the Dynamic Data Structure Program!" << endl; // We greet the user

    DynamicArray dynamicArray; // We create an instance of the dynamic array
    LinkedList linkedList; // We create an instance of the linked list
    CustomStack customStack; // We create an instance of the stack
    CustomQueue customQueue; // We create an instance of the queue
    BinaryTree binaryTree; // We create an instance of the binary tree

    while (true) { // We enter an infinite loop to keep the application running
        cout << "\nChoose a data structure to work with:" << endl; // We prompt the user to choose a data structure
        cout << "1. Dynamic Array" << endl; // Option to work with dynamic array
        cout << "2. Linked List" << endl; // Option to work with linked list
        cout << "3. Stack" << endl; // Option to work with stack
        cout << "4. Queue" << endl; // Option to work with queue
        cout << "5. Binary Tree" << endl; // Option to work with binary tree
        cout << "6. Exit" << endl; // Option to exit the application

        int choice; // Variable to store user's choice
        cout << "Enter your choice: "; // We prompt the user to enter their choice
        cin >> choice; // We read user's choice

        switch (choice) { // We use a switch statement to perform actions based on user's choice
            case 1: { // If user chooses dynamic array
                int value; // Variable to store data entered by user
                cout << "Enter value to insert into the dynamic array: "; // We prompt user to enter data
                cin >> value; // We read data entered by user
                dynamicArray.insertData(value); // We insert the data into the dynamic array
                cout << "Value inserted into the dynamic array!" << endl; // We print a message indicating successful insertion
                break; // We exit the switch statement
            }
            case 2: { // If user chooses linked list
                int value; // Variable to store data entered by user
                cout << "Enter value to insert into the linked list: "; // We prompt user to enter data
                cin >> value; // We read data entered by user
                linkedList.insertData(value); // We insert the data into the linked list
                cout << "Value inserted into the linked list!" << endl; // We print a message indicating successful insertion
                break; // We exit the switch statement
            }
            case 3: { // If user chooses stack
                int value; // Variable to store data entered by user
                cout << "Enter value to push onto the stack: "; // We prompt user to enter data
                cin >> value; // We read data entered by user
                customStack.pushData(value); // We push the data onto the stack
                cout << "Value pushed onto the stack!" << endl; // We print a message indicating successful push
                break; // We exit the switch statement
            }
            case 4: { // If user chooses queue
                int value; // Variable to store data entered by user
                cout << "Enter value to enqueue into the queue: "; // We prompt user to enter data
                cin >> value; // We read data entered by user
                customQueue.enqueueData(value); // We enqueue the data into the queue
                cout << "Value enqueued into the queue!" << endl; // We print a message indicating successful enqueue
                break; // We exit the switch statement
            }
            case 5: { // If user chooses binary tree
                int value; // Variable to store data entered by user
                cout << "Enter value to insert into the binary tree: "; // We prompt user to enter data
                cin >> value; // We read data entered by user
                binaryTree.insertData(value); // We insert the data into the binary tree
                cout << "Value inserted into the binary tree!" << endl; // We print a message indicating successful insertion
                break; // We exit the switch statement
            }
            case 6: { // If user chooses to exit the application
                cout << "Exiting the program." << endl; // We print a message indicating program exit
                return 0; // We return 0 to indicate successful termination of the program
            }
            default: // If user enters an invalid choice
                cout << "Invalid choice! Please choose again." << endl; // We print a message indicating invalid choice
        }
    }

    return 0; // We return 0 to indicate successful termination of the program
}
