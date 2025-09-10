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

        if (minIndex != i) { 
            int temp = arr[i];     
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;  
        }
    }
}