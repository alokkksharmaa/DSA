// Search In Rotated Sorted Array

#include <iostream>
#include <vector>
using namespace std;


int findPivot(vector<int>&arr, int n){
    int start = 0;
    int end = n - 1;

    while(start < end){
        int mid = start + (end - start)/ 2;

        if (arr[mid] >= arr[0]){
            return mid + 1;
        }
        else{
            end = mid;
        }
        return start;
    }
}

int binarySearch(vector<int>& arr, int start, int end, int key) {
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
            end = mid - 1;
        else
            start = mid + 1;
        
    }
    int mid = start + (end - start) / 2;
    return -1;
}

int search(vector<int>&arr, int n, int k){
    int pivot = findPivot(arr,n);

    if (k >= arr[pivot] && k <= arr[n-1]){
        return binarySearch(arr, pivot, n - 1, k);
    }
    else{
        return binarySearch(arr, 0, pivot - 1, k);
    }
}