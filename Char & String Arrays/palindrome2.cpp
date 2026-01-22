#include<bits/stdc++.h>
using namespace std;

bool palindrome(char s[]){
  string t = s;
  string clean;
  for(char c : t){
    if(isalnum(c)){
      clean += tolower(c);
    }
  }

  int start = 0;
  int end   =  clean.size()-1;

  while(start < end){
    if(clean[start] != clean[end]) return false;
    start++;
    end--;
  }
  return true;
}

int main(){
  char s[100];
  cout << "Enter a string" << endl;
  cin.getline(s, 100);

  if(palindrome(s)){
      cout << "Palindrome" << endl;
  } else {
      cout << "Not a Palindrome" << endl;
  }

  return 0;
}