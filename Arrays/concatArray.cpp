#include <bits/stdc++.h>
using namespace std;

int ArrayConcat(int arr[], int arr1[], int n1 , int n2){
  for(int i=0; i<n1; i++){
    cout << arr[i]   << " ";
  }
  cout << "+ " ;
  for(int j=0; j<n2; j++){
    cout << arr1[j] << " ";
  }
}


int main(){
  int arr[] = {3,4,7,3,8};
  int arr1[] = {23,3,9,1,5};

  int n1 = sizeof(arr)/sizeof(arr[0]);
  int n2 = sizeof(arr1)/sizeof(arr[0]);

  cout << ArrayConcat(arr, arr1, n1, n2) ;


  return 0;
}