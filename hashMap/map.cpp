#include <bits/stdc++.h>
using namespace std;

int main(){

  unordered_map<string, int> mp;

  // insert
  mp["cat"] = 3;
  mp.insert({"dog", 5});

  // access
  mp["apple"] = 56;
  cout << mp["apple"] << endl; 

  // check existence
  if(mp.count("cat")){
    cout << "Exists" << endl;
  };


  // remove or erase
  mp.erase("cat");

  for(auto &p : mp){
    cout << p.first << " " << p.second << "\n";
  }

  return 0;
}