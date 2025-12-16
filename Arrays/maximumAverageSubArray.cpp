#include <bits/stdc++.h>
using namespace std;

double findMaxAverage(int nums[], int n, int k){

  int sum = 0; 
  for(int i=0; i<k;i++){
    sum += nums[i];
  }

  int maxSum = sum;
  int start =  0;
  for(int end=k; end<n; end++){
    sum -= nums[start++];
    sum += nums[end];

    maxSum = max(maxSum, sum);
  }

  return (double) maxSum / k;

}


int main()
{

  int nums[] = {1,12,-5,-6,50,3};
  int n = sizeof(nums)/sizeof(nums[0]);

  int k = 4;

  cout << "MaxAverage of SubArray is: " << findMaxAverage(nums, n, k) << endl;
    
  return 0;
}