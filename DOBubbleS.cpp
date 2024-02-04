// C++ program designed for online compilation

#include <iostream>
using namespace std;

int main() {
    // Initializing an array
    int numbers[] = {8, 7, 6, 5, 2, 4, 1, 3, 9};
    
    // Calculating the length of the array
    int arrayLength = sizeof(numbers) / sizeof(int);

    // Implementing the Bubble Sort Algorithm to sort the array in descending order
    for (int i = 0; i < arrayLength; i++) // Iterating through each element
    {
        for (int j = 0; j < arrayLength - 1; j++) // Comparing adjacent elements
        {
            if (numbers[j] < numbers[j + 1]) {
                // Swapping if the current element is less than the next
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    // Printing the sorted array in descending order
    cout << "Sorted Array (Descending): ";
    for (int i = 0; i < arrayLength; i++) {
        cout << numbers[i] << " ";
    }
    
    return 0;
}
