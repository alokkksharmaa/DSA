#include <iostream>
#include <cstring>
using namespace std;

bool checkPalindrome(char a[])
{
  int s = 0;
  int e = strlen(a)-1;

  while(s <= e){
    if(s[a] != e[a]){
      return 0;
    }
    else{
      s++;
      e--;
    }
  }
  return 1;
}

int main()
{

  char a[20];
  cout << "Enter a char to check palindrome: " << endl;
  cin >> a;

  if(!checkPalindrome(a)){
    cout <<"String is not palindrome"; 
  }else{
    cout << "String is Palindrome";
  };
  

  return 0;
}