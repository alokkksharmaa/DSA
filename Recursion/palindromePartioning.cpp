// 131. Palindrome Partitioning
// Given a string s, partition s such that every substring of the partition is a palindrome.
//  Return all possible palindrome partitioning of s.

#include <bits/stdc++.h>
using namespace std;

bool  palindrome(string s, int start, int end){

  while(start <= end){
    if(s[start++] != s[end--])  return false;
  }
  return true;

};

void helper(string &s, int n){
  



}

int main(){

  char s[] = "aab";
  int n  =  3;



  return 0;
}