#include <iostream>
#include <cstring>
using namespace std;

void reverseString(char name[]){
  int start = 0;
  int end = strlen(name) - 1;

  while(start < end)
  {
    swap(name[start++], name[end--]);
  }
}

int main()
{
  char name[20];
  cout << "Enter name: ";
  cin >> name;

  cout << "Your name is: "<< name << endl;
  reverseString(name);

  cout <<"Reversed version of your name is: " << name << endl;

  return 0;
}