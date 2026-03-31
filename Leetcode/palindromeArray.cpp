#include <bits/stdc++.h>
using namespace std;


class  Solution {
  public:
  void helper(vector<int>&arr, int index, vector<vector<int>>&ans){

    if(index >= arr.size()){
      ans.push_back(arr);
      return;
    };


    for(int j=index; j<arr.size(); j++){

      swap(arr[index], arr[j]);
      helper(arr, index+1, ans);
      // backtracking
      swap(arr[index], arr[j]);
    }

  };


  vector<vector<int>> palindrome(vector<int> arr){
    vector<vector<int>> ans;
    
    helper(arr, 0, ans);

    return ans;
  }
}