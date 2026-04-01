#include <iostream>
using namespace std;

bool isSorted(int arr[], int n)
{

  for (int i = 0; i < n-1; i++)
  {
    if (arr[i] <= arr[i + 1])
    {
      return true;
    }
  }
  return false;
};

int main()
{

  int arr[] = {2, 5, 1, 7, 3};
  int n = 5;

  cout << (isSorted(arr, n)  ?  "Sorted Array" : "Array is not Sorted yet") << endl;

  return 0;
}
