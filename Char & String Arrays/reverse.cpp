#include <iostream>
using namespace std;

// In char array if we press space , tab  or enter b/w two character ,
//  It terminates the 2nd one.  known as null character

int reverse(char name[], int n)
{
  int s = 0;
  int e = n - 1;

  while (s < e)
  {
    swap(name[s++], name[e--]);
  }
}

int getlength(char name[])
{
  int count = 0;
  for (int i = 0; name[i] != '\0'; i++)
  {
    count++;
  }
  return count;
}

bool isPalindrome(char name[], int n)
{
  int s = 0;
  int end = n - 1;

  while (s <= end)
  {
    if (name[s] != name[end])
      return 0;
    s++;
    end--;
  }
  return 1;
}

int main()
{
  char name[20];
  cout << "Enter your name: ";
  cin >> name;
  cout << "Your name is: " << name << endl;

  int len = getlength(name);
  cout << "Your Length of your name is: " << len << endl;

  reverse(name, len);
  cout << "Revese of your name is: " << endl;
  cout << name << endl;

  //
  cout << "Palindrome or not " << isPalindrome(name, len) << endl;
  return 0;
};