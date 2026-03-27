#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

void getPermutation(vector<int>& nums, vector<int>& ds, vector<vector<int>>& ans, vector<bool>& freq) {
  if (ds.size() == nums.size()) {
      ans.push_back(ds);
      return;
  }
  for (int i = 0; i < nums.size(); i++) {
      if (!freq[i]) {
          freq[i] = true;
          ds.push_back(nums[i]);
          getPermutation(nums, ds, ans, freq);
          ds.pop_back();
          freq[i] = false;
      }
  }
}
int main()
{
  vector<int> nums =  {1,2,3};
  int n = 3;
  vector<vector<int>> ans;
  vector<int> ds;
  vector<bool> freq(nums.size(), false);
  getPermutation(nums, ds, ans, freq);
        
  
  return ans;
};
