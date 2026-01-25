#include <iostream>
using namespace std;

void dutchNationalFlag(int nums[], int n){
  int low = 0;
  int mid = 0;
  int high= n-1;
  
  while(mid  <= high){
    if(nums[mid] == 0 ){
      swap(nums[low], nums[mid]);
      low++;
      mid++;
    }else if(nums[mid] == 1){
      mid++;
    }else{
      // nums[mid] == 2
      swap(nums[low], nums[high]);
      high--;
    }
  }
}


int main()
{
  int nums[] = {2,0,2,1,1,0};
  int n = sizeof(nums)/sizeof(nums[0]);
  
  dutchNationalFlag(nums, n);

  for(int i=0;i<n;i++){
    cout << nums[i] << " " ;
  }
  

  return 0;
}