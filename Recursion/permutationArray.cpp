#include <bits/stdc++.h>
using namespace std;

void helper(vector<int>&arr, int index, vector<vector<int>>&ans){

  // base case
  if(index >= arr.size()){
    ans.push_back(arr);
    return;
  };

  // n! = n!/(n-r)!r! 
  // ex :- n = 3 -> 3! = 3*2*1 = 6 

  for(int j = index ; j<arr.size();j++){
    swap(arr[index], arr[j]);
    helper(arr, index+1, ans);

    // backtracting
    swap(arr[index], arr[j]);
  }
};

int main()
{
  vector<int> arr = {2, 3, 4};
  int index = 0;

  vector<vector<int>> ans;

  helper(arr, index, ans);

  for (const auto& perm : ans) {
    for (int val : perm) {
        cout << val << " ";
    }
    cout << endl;
}
    
  return 0;
}