#include <iostream>
using namespace std;

// Function to perform Selection Sort
void selectionSort(int arr[], int n) {

    // Traverse through the array
    // i represents the current position in the array to place the correct minimum element
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i; // Assume the current element is the minimum in the unsorted portion

        // Find the index of the smallest element in the remaining unsorted portion
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j; // Update minIndex if a smaller element is found
            }
        }

        // Swap the found minimum element with the first element of the unsorted portion
        if (minIndex != i) { 
            int temp = arr[i];     // Temporary variable to hold current element
            arr[i] = arr[minIndex]; // Place minimum element at current position
            arr[minIndex] = temp;  // Move the old current element to minIndex position
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; // Print each element separated by a space
    }
    cout << endl; // Move to the next line after printing the array
}

int main() {
    // Example array to sort
    int arr[] = {64, 25, 12, 22, 11};

    // Calculate the number of elements in the array
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n); // Print the array before sorting

    selectionSort(arr, n); // Call selection sort function

    cout << "Sorted array: ";

    printArray(arr, n); // Print the array after sorting

    return 0; // End of program

}
