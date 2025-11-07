#include <iostream>
using namespace std;
void SelectionSort(int arr[], int n){
 
  for(int i = 1; i< n; i++){
    int key = arr[i];
    int j = i-1;

    while(j>=0 && arr[j] > key){
      int j = arr[j+1];
      int key = arr[i];
      j--;
    }
    arr[j+1] = key;
  }
}

int main(){
  int arr[] =  {1,24,5,3,13,87,89};
  int n =  sizeof(arr)/sizeof(arr[0]);
  
  for(int i =0;i<n; i++){
    cout << arr[i] << " ";

  }
  return 0;

}