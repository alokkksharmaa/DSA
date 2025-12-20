#include <iostream>
using namespace std;


bool AddXor(int nums[], int n , int target){
  int sum = 0;
  for(int i=0; i<n;i++){
    sum ^= nums[i];
  }
  return sum == target;
}

int main()
{
    int nums[] = {2,6,2,5,1,4,9,7};
    int nums1[] = {1,2,6};

    int n  = sizeof(nums)  / sizeof(nums[0]);
    int n1 = sizeof(nums1) / sizeof(nums1[0]);

    int target = 5;

    cout << AddXor(nums, n, target)  << endl;
    cout << AddXor(nums1, n1, target) << endl;



  return 0;
}