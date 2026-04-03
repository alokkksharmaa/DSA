#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  void helper(vector<int>&arr, int index, vector<vector<int>> &ans)
  {

    // base case
    if (index >= arr.size())
    {
      ans.push_back(arr);
      return;
    }

    for (int i = index ; i < arr.size(); i++)
    {
      swap(arr[index], arr[i]);
      helper(arr, index + 1, ans);
      // backtracking
      swap(arr[index], arr[i]);
    }
  };

  vector<vector<int>> palindrome(vector<int> arr)
  {

    vector<vector<int>> ans;

    helper(arr, 0, ans);

    return ans;
  }
};