#include <bits/stdc++.h>
using namespace std;

bool palindrome(char ch[]){

  int left  = 0;
  int right = strlen(ch)-1; 

  while(left < right){
    while(left < right && !isalnum(ch[left])) left++;
    while(left < right && !isalnum(ch[right])) right--;
    
    if(tolower(ch[left]) != tolower(ch[right]))  return false;
    
    left++;
    right--;
  }
  return true;
}

int main() {
  char ch[120];
  cout << "Enter your name: ";
  cin.getline(ch, 120);

  if(palindrome(ch)){
      cout << "Is Palindrome";
  } else {
      cout << "Not Palindrome";
  }

  return 0;
}



