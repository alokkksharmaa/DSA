#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nums[] = {5,1,5,2,5,3,2,3,3,3};

    int n = sizeof(nums) / sizeof(nums[0]);

    unordered_map<int, int> mp;

    for(int i=0;i<n;i++){
      mp[nums[i]]++;
    }
    int maxCount = 0;
    int maxElement = -1;
    for(auto x : mp){
      if(x.second > maxCount){
        maxCount = x.second;
        maxElement = x.first;
      }
    }
    cout << "Element with maximum frequency is: " << maxElement << " with count: " << maxCount << endl;



  return 0;
}