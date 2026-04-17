#include <iostream>
using namespace std;

int uniqueElement(int nums[], int n){

  int idx = 1;

  for(int i=1; i<n; i++){
    if(nums[i] != nums[i-1]){
      nums[idx++] == nums[i];
    }
  }
  return idx;

};

int main()
{

  int nums[] = {1, 2, 2, 3, 4, 4, 4, 5, 5};
  int n = sizeof(nums)/sizeof(nums[0]);

  uniqueElement(nums, n);

  for(int i = 0; i<n;i++){
    cout << nums[i] << " ";
  }
    
  return 0;
}