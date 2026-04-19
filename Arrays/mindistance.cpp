#include <iostream>
#include <vector>
using namespace std;

int maxDistance(vector<int> &nums1, vector<int> &nums2)
{
  int i = 0, j = 0;
  int ans = 0;

  while (i < nums1.size() && j < nums2.size())
  {
    if (nums1[i] <= nums2[j])
    {
      ans = max(ans, j - i);
      j++;
    }
    else
    {
      i++;
      if (i > j)
        j = i;
    }
  }

  return ans;
}
}
;

int main()
{

  vector<int> nums1 = {55, 30, 5, 4, 2};
  vector<int> nums2 = {100, 20, 10, 10, 5};

  return 0;
}