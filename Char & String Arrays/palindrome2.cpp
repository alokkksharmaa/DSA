#include <bits/stdc++.h>
using namespace std;

bool palindrome(char ch[]){
  string s = ch;
  string  clean;
  for(char c : s){
    if(isalnum(c)){
      clean += tolower(c);
    }
  };

  int start = 0;
  int end   = size(s)-1;
  
  while(start < end)
  if(clean[start] != clean[end]) return false;
    start++;
    end--;
  return false;
}



int main()
{

  char ch[120];
  cout <<"Enter your name: " ;
  cin >> ch;
  cin.getline(ch, 100);

  if(palindrome(ch)){
    cout << "Is Palindrome";
  }else{
    cout << "Not Palindrome";
  }

  return 0;
}