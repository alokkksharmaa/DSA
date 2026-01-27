#include <bits/stdc++.h>
using namespace std;

int freqCount(vector <int> nums){
  sort(nums.begin(), nums.end());

  unordered_map <int, int> mp;

  for(int i=0; i<nums.size(); i++){
    mp[nums[i]]++;
  };

  for(auto x: mp){
    cout << x.first << " appears " << x.second << " times " << endl;
  };

  return 0;
};

int main()
{
  vector <int> nums  = {1,2,1,2,1,1,2,3,2,1};

  freqCount(nums);

  return 0;
};