#include <iostream>
using namespace std;

// Heapify-down for Max-Heap
void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;  // left child
    int right = 2 * i + 2; // right child

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        // Swap root with largest
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

        // Recursively heapify the affected subtree
        heapify(arr, n, largest);
    }
}

// HeapSort main function
void heapSort(int arr[], int n) {
    // Step 1: Build Max-Heap (heapify from bottom-up)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // Step 2: Extract elements from heap one by one
    for (int i = n - 1; i >= 0; i--) {
        // Move current root to end
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        // Heapify reduced heap
        heapify(arr, i, 0);
    }
}

// Function to print array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// ---------- Driver Code ----------
int main() {
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    //int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, 6);

    heapSort(arr, 6);

    cout << "Sorted array: ";
    printArray(arr, 6);

    return 0;
}
