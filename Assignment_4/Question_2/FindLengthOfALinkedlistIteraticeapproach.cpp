/*Explanation:

    We initialize a variable length to 0 to keep track of the number of nodes encountered.
    We start traversing the linked list from the head node, initializing a pointer current to the head.
    While the current node is not nullptr (indicating the end of the list), we increment the length counter and move current to the next node.
    Once we finish traversing the entire list, we return the final value of length, which represents the length of the linked list.
*/

#include <iostream>

// Define a struct representing a node in a linked list
struct Node {
    int data;       // Data stored in the node
    Node* next;     // Pointer to the next node in the list

    // Constructor to initialize a node with given data and next pointer
    Node(int new_data) : data(new_data), next(nullptr) {}
};

// Function to find the length of a linked list iteratively
int findLengthIterative(Node* head) {
    int length = 0;       // Initialize length counter to 0
    Node* current = head; // Start from the head of the list

    // Traverse the list while counting nodes
    while (current != nullptr) {
        length++;          // Increment length for each node encountered
        current = current->next; // Move to the next node
    }
    return length; // Return the length of the list
}

int main() {
    // Create a linked list
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    // Find the length of the linked list
    int length = findLengthIterative(head);
    std::cout << "Length of the linked list: " << length << std::endl;

    return 0;
}

