#include <bits/stdc++.h>
using namespace std;

vector <int> RemoveElements(int nums[], int size, int k){
  vector <int> count;
  for(int i=0; i<size;i++){
    if(nums[i] != k){
      count.push_back(nums[i]);
    }
  }
  return count;
}

int main()
{
  int nums[] = {2,4,8,2,1};
  int size = sizeof(nums)/sizeof(nums[0]);
  int k = 2;

  vector <int> print =  RemoveElements(nums, size, k);

  for(int x: print){
    cout << x << " ";
  }

  return 0;
}