#include <bits/stdc++.h>
using namespace std;

int nonRepeating(vector <int> &nums){
    unordered_map <int, int> mp;


    int count=0;

    for(int i=0; i<nums.size(); i++){
      mp[nums[i]]++;
    }

    for(int i=0; i<nums.size(); i++){
      int key = nums[i];
      if(mp[key] == 1)  return key;
    }

    return -1;
};

int main()
{
  vector <int> nums = {10, 5, 3, 4, 3, 5, 6};

  int result = nonRepeating(nums);

  if(result != 1){
    cout << "First Non repeating number is: " << result << endl;
  }else{
    cout << "No non repeating elements found" << endl;
  }
  
  return 0;
}