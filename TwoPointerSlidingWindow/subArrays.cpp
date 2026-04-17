#include <iostream>
using namespace std;

int main()
{
  int arr[] = {2, 5, 1, 7, 10};
  int n = sizeof(arr)/sizeof(arr[0]);

  for(int i=0;i<n;i++){
    string str = " ";
    for(int j = i; j<n; j++){
      for(int k = i; k<=j;k++){
        cout << arr[k] << " ";
      }
      cout << endl;
    }  
    cout << endl;
  }
  return 0;
}