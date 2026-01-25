#include <bits/stdc++.h>
using namespace std;


// int maxPairSum(int nums[], int n){
//   sort(nums, nums+n);
//   int i=0, j=n-1;
//   int maxSum = INT_MIN;
//   while(i<j){
//     maxSum = max(maxSum, nums[i++] +  nums[j--]);
//   }
//   return maxSum;
// }

int  minPairSum(int nums[], int n){
  sort(nums, nums+n);
  int sum = 0;
  for(int i=0; i<(n/2);i++){
    sum = max(sum, nums[i] + nums[n-i-1]);
  }
  return sum;
}

int main()
{
  int nums[] = {3,5,2,3};
  int n = sizeof(nums)/sizeof(nums[0]);
 
  cout << minPairSum(nums, n) << endl;

  return 0;
}