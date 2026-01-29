#include <bits/stdc++.h>
using namespace std;

int main()
{ 
  string  s = "198861";

  unordered_map<char, char> mp = {
    {'0','0'}, {'1','1'}, {'8','8'}, {'6','9'}, {'9','6'}
};

  int i=0;
  int j=s.size()-1;
  while(i<=j){
    if(mp.find(s[i]) == mp.end() || mp[s[i]] != s[j]){
      cout<<"Not Strobogrammatic"<<endl;
      return 0;
    }
    i++;
    j--;
  }
  cout << "Strobogrammatic" << endl;
  return 0;
}