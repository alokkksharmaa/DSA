#include <bits/stdc++.h>
using namespace std;

int maxSubArrayXOR(int arr[], int n, int k)
{
  int left = 0;
  int currXor = 0;
  int maxXor = 0;
  for (int right = 0; right < n; right++)
  {
    currXor ^= arr[right];

    if (right - left + 1 == k)
    {
      maxXor = max(maxXor, currXor);
      currXor ^= arr[left];
      left++;
    }
  }
  return maxXor;
}

int main()
{
  int arr[] = {2, 5, 8, 1, 1, 3};
  int n = sizeof(arr) / sizeof(arr[0]);

  int k = 3;

  cout <<maxSubArrayXOR(arr, n, k) << endl; 
  
  
  return 0;
}