#include <bits/stdc++.h>
using namespace std;


int main()
{

  int nums[] = {4,1,2,1,2,4,4,3,3};

  int n = sizeof(nums) / sizeof(nums[0]);

  unordered_map<int, int> mp;

  for(int i=0; i<n;i++){
    mp[nums[i]]++;
    
  }
  for(auto x : mp){
    if(x.second == 3){
      cout << x.first << endl;
    }
  }
  return 0;
}