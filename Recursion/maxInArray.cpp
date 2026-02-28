#include <iostream>
using namespace std;

int getMax(int arr[], int n)
{

  if (n = 1)
    return arr[0];

  int last = arr[n - 1];
  int ans  = getMax(arr, n-1);

  return max(last, ans);
}

int main()
{
  int arr[] = {2, 3, 5, 9, 6, 1, 7};
  int n = sizeof(arr) / sizeof(arr[0]);

  cout << getMax(arr, n) << endl;

  return 0;
}