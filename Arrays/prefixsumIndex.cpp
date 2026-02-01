#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector <int> nums = {2,6,1,7,2,3,0};
  int n = nums.size();

  vector <int> prefix(n);

  prefix[0] = nums[0];

  for(int i=1;i<n;i++){
    prefix[i] = prefix[i-1] + nums[i];
  };
  
  for(int i=0; i<n;i++){
    cout << "Sum till index: " << i << " = " << prefix[i] << endl;
  }
  return 0;
}