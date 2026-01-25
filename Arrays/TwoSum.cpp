#include <bits/stdc++.h>
using namespace std;

int twoSum(int nums[], int n, int k){
   int low = 0;
   int high = n-1;

   while(low < high){
    int currentSum = nums[low] + nums[high];
    if(currentSum == k){
    }else if(currentSum < k){
        low++;
    }else{
        high--;
    }
   }
   return {};
};


int main(){
    int nums[] = {2,3,1,5,4,3,5,3,4};
    int n = sizeof(nums)/sizeof(nums[0]);
    int k = 6;


    int sum = twoSum(nums, n, k);
    cout << "Sum " << sum << endl;  

}