#include <iostream>
using namespace std;

int main()
{
  int arr[] = {2, 5, 1, 7, 10};
  int n = sizeof(arr)/sizeof(arr[0]);

  for(int i=0;i<n;i++){
    string sub = "";
    for(int j=i;j<n;j++){
      sub += to_string(arr[j]) + " "; 
      cout <<sub << endl;
    }
    cout << endl;
  }
    
  return 0;
}