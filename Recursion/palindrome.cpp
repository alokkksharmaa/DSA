#include <iostream>
using namespace std;

bool checkPalindrome(string s, int left , int right){

  if(s[left] >= s[right]) return true;

  if(s[left] != s[right]) return false;

  return checkPalindrome(s, left + 1 , right + 1); 
}

int main()
{

  string s = "madam";

  if(checkPalindrome(s, 0, s.length()-1 )){
    cout << "Palindrome"<< endl;
  }else{
    cout << "Not a palindrome";
  }
  
  return 0;
}