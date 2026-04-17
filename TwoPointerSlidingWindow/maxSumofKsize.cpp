#include <bits/stdc++.h>
using namespace std;

// fix window template 

int main()
{
  int nums[] = {1, 2, 3, 3, 4, 5, -1};
  int k = 4;

  int n = sizeof(nums) / sizeof(nums[0]);
  int windowSum = 0;

  for (int i = 0; i < n; i++)
  {
    windowSum += nums[i];
    // got sum == 17 of the entire array elements
  };

  cout << windowSum << endl;
                 // 4
  for (int right = k; right < n; right++)
  {

    windowSum += nums[right];
    cout << windowSum << " "  << endl;
    windowSum -= nums[right - k];

    cout << windowSum << " ";
  }

  return 0;
}