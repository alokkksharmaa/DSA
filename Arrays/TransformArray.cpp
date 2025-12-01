#include <bits/stdc++.h>
using namespace std;


void TransformArray(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    if(arr[i] % 2 == 0){
      arr[i] = 0;
    }
    else{
      arr[i] = 1;
    }
  }
  sort(arr, arr + n);
}

int main()
{
  int arr[] = {2, 3, 12, 4, 5, 13, 17};
  int n = sizeof(arr) / sizeof(arr[0]);

  cout << "Original Array is " ;
  for(int i=0; i< n; i++){
    cout << arr[i];
  }
  cout << endl;

  TransformArray(arr,n);

  cout <<  "Tranformed Array is: ";
  for(int i=0; i<n;i++){
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}