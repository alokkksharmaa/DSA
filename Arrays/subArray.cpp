#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector <int> nums = {2,3,5,8,1,5,9};
  int n = nums.size();

  for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
      for(int k=i; k <= j; k++){
        cout <<  nums[k] << " " ; 
      }
      cout <<  endl;
    }
  }
  return 0;
}