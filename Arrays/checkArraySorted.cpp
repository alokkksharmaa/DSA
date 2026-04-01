#include <iostream>
using namespace std;

bool isSorted(int arr[], int n)
{

  for (int i = 0; i < n-1; i++)
  {
    if (arr[i] >= arr[i + 1])
    {
      return false;
    }
  }
  return true;
};

int main()
{

  int arr[] = {2, 5, 1, 7, 3};
  int n = 5;

  if(!isSorted(arr, n)){
    cout << " Array is Not sorted!";
  }else{
    cout << "Sorted Array";
  };
  cout << endl;

      return 0;
}
