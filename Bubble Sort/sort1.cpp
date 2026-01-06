#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size){
  int n =  size;

  for(int i=1; i<n; i++){
    for(int j=0; j < n-1; j++){
      if(arr[j] > arr[j+1]){
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
}

int main(){
  int arr[] = {2,3,45,23,12,65,32};
  int size =  sizeof(arr)/sizeof(arr[0]);
  bubbleSort(arr, size);

  cout << "Sorted Array: ";
  for (int i = 0; i < size; i++) {
      cout << arr[i] << " ";
  }
  cout << endl;
  
}