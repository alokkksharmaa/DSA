#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector <int> arr ={2,7,6, 3};
  int target = 9;

  unordered_map <int , int> mp;  //value -> index
  
  for(int i=0; i<arr.size();i++){
    int need = target - arr[i];
    
      if(mp.count(need)){
        cout << mp[need] << " " << i << "\n";
        return 0;
      }
      mp[arr[i]] = i;
  }
  
  
  return 0;
}