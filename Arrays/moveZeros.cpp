#include <iostream>
using namespace std;

int main()
{

  int nums[] = {1, 2, 0, 4, 3, 0, 5, 0};
  int n = sizeof(nums)/sizeof(nums[0]);

  int count = 0;

  for(int i = 0; i<n; i++){
    
    if(nums[i] != 0){
    
      swap(nums[i], nums[count]);

      count++;
    }

  }
  
  for(int i = 0; i<n;i++){
    cout << nums[i] << " ";
  }
    
  return 0;
}