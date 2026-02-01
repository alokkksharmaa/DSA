#include <bits/stdc++.h>
using namespace std;

vector <int> minimumCost(vector<int>& nums) {
    vector<int> v(nums.begin()+1 , nums.end());
    sort(v.begin(), v.end());
    return nums[0] +  v[0]  + v[1]; 
};

int main()
{
  vector<int> nums = {1,2,3,12};
    
  minimumCost(nums);
  return 0;
}