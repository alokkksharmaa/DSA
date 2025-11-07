#include <iostream>
using namespace std;

int traverse(int arr[] , int n){
    int start=0;
    int end = n-1; 

    while(start < end) {
        while (arr[start] == 0 && start < end) start++;
        while (arr[end] == 1 && start < end) end--;

        if (start < end) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }

}

int main(){
    int arr[] = {0,0,0,1,0,1,1,1,0,0};
    int n = sizeof(arr) / sizeof(arr[0]);

    traverse(arr,10);

    for (int i = 0; i < n; i++)
    cout << arr[i] << " ";

}