#include <iostream>

int removeDuplicatesSorted(int arr[], int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    int j = 0;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            arr[j++] = arr[i];
        }
    }
    arr[j++] = arr[n - 1];
    return j;
}

int main() {
    int arr[] = {10, 20, 20, 30, 40, 40, 40, 50, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    n = removeDuplicatesSorted(arr, n);
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}