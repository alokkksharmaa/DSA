#include <iostream>
using namespace std;

int findCharString(string &s, char ch){
  int n = s.length();
  for(int i=0; i<n;i++){
    if(s[i] == ch) return i;
  }
  return -1;
}

int main()
{

  string s = "geeksforgeeks";
  char ch = 'k';

  cout << findCharString(s, ch) << endl;

  
  return 0;
}