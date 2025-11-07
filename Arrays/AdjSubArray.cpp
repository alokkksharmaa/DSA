#include <iostream>
#include <algorithm>
using namespace std;

int maxIncreasingSubarrays(int arr[] , int size)
{
  int n = size;
  int prev = 0,  curr = 1, ans = 0;
  
  for(int i=1; i<n; i++){
    if(arr[i] > arr[i-1]){
    curr++;
    }else{
    ans = max(ans, min(prev,curr));
    prev = curr;
    curr = 1;
  }
}
ans = max(ans, min(prev, curr));
        return ans;
}

int main()
{
  int arr[] = {2, 5, 7, 8, 9, 2, 3, 4, 3, 1};
  int size = sizeof(arr) / sizeof(arr[0]);

  cout << "Adjacent Increasing Subarrays: " << maxIncreasingSubarrays(arr, size) << endl;
}