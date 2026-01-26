#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  getline(cin , s);

  stringstream stream(s);
  string word;
  int count = 0;

  while(stream >> word){
    count++;
  }
  
  cout << count << endl;
  
  return 0;
}