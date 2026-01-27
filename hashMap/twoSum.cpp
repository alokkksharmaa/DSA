#include <bits/stdc++.h>
using namespace std;

int twoSum(vector <int> &arr, int target){
  unordered_map <int, int> mp;

  for(int i=0; i<arr.size(); i++){
    int need = target - arr[i];

    if(mp.count(need)){
      cout << "Found pair in indices: " << mp[need] << " and " << i << endl;
       return {mp[need]};
    }
    mp[arr[i]] = i;
  }
  return {};
}

int main(){
  vector <int> arr = {8,2,5,2,6,7,3};
  int target = 8;

  twoSum(arr, target);

}