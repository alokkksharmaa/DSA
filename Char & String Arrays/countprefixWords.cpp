#include <bits/stdc++.h>
using namespace std;

int preFixCount(const vector<string> &words,const string pref){
  int count = 0;
  int len   = pref.size();

  for(const string& word: words){
    if(word.substr(0, len) == pref){
      count++;
    }
  }
  return count;
}

int main()
{
  vector <string> words = {"pay","attention","practice","attend"};
  string pref =  "at";
  cout << preFixCount(words, pref) << endl;

  return 0;
}