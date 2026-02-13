#include <bits/stdc++.h>
using namespace std;

int main()
{
  int arr[] = {2, 4, 6, 9};
  int n = sizeof(arr) / sizeof(arr[0]);
  sort(arr, arr + n);
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > arr[i + 1])
    {
      return i + 1;
    }
  }
  return 0;

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << endl;
  }
  return 0;
}