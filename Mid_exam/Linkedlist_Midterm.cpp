#include <iostream>
using namespace std;

// Node structure for the linked list
struct Node {
    string data; // Data for plate dispenser (e.g., ID, type)
    Node* next; // Pointer to the next node
};

// Linked list class for plate dispensers
class PlateDispenserList {
private:
    Node* head; // Head pointer of the linked list

public:
    // Constructor to initialize an empty list
    PlateDispenserList() {
        head = nullptr;
    }

    // Function to insert a plate dispenser at the end of the list
    void insertPlateDispenser(string plateData) {
        Node* newNode = new Node; // Create a new node
        newNode->data = plateData; // Assign data to the new node
        newNode->next = nullptr; // Make the new node point to nullptr

        if (head == nullptr) { // If the list is empty
            head = newNode; // Set the new node as the head
        } else {
            Node* temp = head;
            while (temp->next != nullptr) { // Traverse to the end of the list
                temp = temp->next;
            }
            temp->next = newNode; // Insert the new node at the end
        }
    }

    // Function to print the plate dispensers
    void printPlateDispensers() {
        Node* temp = head;
        cout << "Plate Dispensers:" << endl;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    PlateDispenserList plateList; // Create a plate dispenser list object
    int size;
    cout << "Enter the number of plate dispensers: ";
    cin >> size; // Input the number of plate dispensers

    // Input data for each plate dispenser and insert into the list
    for (int i = 0; i < size; ++i) {
        string plateData;
        cout << "Enter data for plate dispenser " << i + 1 << ": ";
        cin >> plateData;
        plateList.insertPlateDispenser(plateData); // Insert the plate dispenser into the list
    }

    // Print the plate dispenser list
    plateList.printPlateDispensers();

    return 0;
}
