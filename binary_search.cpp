#include <iostream>
using namespace std;

// Recursive binary search function
int Search(int arr[], int start, int end, int target) {
    // Base case
    if (start > end) return -1;

    int mid = start + (end - start) / 2;

    if (arr[mid] == target) return mid;

    if (arr[mid] < target) {
        return Search(arr, mid + 1, end, target);
    } else {
        return Search(arr, start, mid - 1, target);
    }
}

int main() {
    int arr[] = {2, 4, 10, 15, 16, 25, 65}; // Sorted array for binary search
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;


    int result = Search(arr, 0, n - 1, target);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}
