#include <bits/stdc++.h>
using namespace std;

vector <vector <int>>  threeSum(vector<int> &nums){
  
  int n = nums.size();
  vector<vector<int>> ans;
  sort(nums.begin(), nums.end());

  for(int i=0; i<n;i++){
    if(i>0 && nums[i] == nums[i-1]) continue;

    int j  = i + 1, k = n-1;

    while(j < k) {
      int sum = nums[i] +  nums[j] + nums[k];

      if(sum > 0) {
        k--;
      }else if(sum < 0){
        j++;
      }
      else{
        ans.push_back({nums[i] , nums[j] , nums[k]});
        j++;
        k--;

        while(j < k && nums[j] == nums[j -1])j++;
        while(j < k && nums[k] == nums[k -1])k--;        
      }
    }
  }
  return ans;

};


int main()
{
  vector<int> nums = {-1, 0, 1, 2, -1, -4};


  vector<vector<int>> result  = threeSum(nums); 


  for(auto  &answer : result){
    for(auto x :  answer){
      cout << x <<  " ";
    }
    cout << endl;
  }

  // output 
  //  -1 -1 2 
  // -1 0 1


  return 0;
}