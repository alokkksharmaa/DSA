#include <bits/stdc++.h>
using namespace std;

// Given an increasing sorted rotated array arr[] of distinct integers.
// The array is right-rotated k times. Find the value of k.
// Let's suppose we have an array arr[] = [2, 4, 6, 9], if we rotate it by 2 
// times it will look like this:
// After 1st Rotation : [9, 2, 4, 6]
// After 2nd Rotation : [6, 9, 2, 4]

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