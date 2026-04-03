// 131. Palindrome Partitioning
// Given a string s, partition s such that every substring of the partition is a palindrome.
//  Return all possible palindrome partitioning of s.

#include <bits/stdc++.h>
using namespace std;

bool  isPalindrome(string s, int start, int end){

  while(start <= end){
    if(s[start++] != s[end--])  return false;
  }
  return true;

};

void helper(string &s, int index, vector<int>&path, vector<int>&res){

  if(index == s.size()){ 
    res.push_back(path);
    return;
  }

  for(int i=index;i<s.size(); i++){
    if(isPalindrome(s, index, res)){
      path.push_back(s.substr(index, i - index+1));
      helper(s, i+1, path, res);
      path.pop_back();
    }
  }



}

int main(){

  const char s[] = "aab";

  vector<int> res;
  vector<int> path;

  helper(s, 0, path , res);


  return 0;
}