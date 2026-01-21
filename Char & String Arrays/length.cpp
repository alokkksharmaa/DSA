#include <iostream>
using namespace std;

int lengthString(char name[]){
  int count = 0;
  for(int i =0; name[i] != '\0'; i++){
    count++;
  };
  return count;
}

int main()
{

  char ch[20];
  cout << "Enter your name: ";
  cin >> ch;

  cout <<"Your name is name" << ch;

  cout << endl;

  cout << "Length of string is: " << lengthString(ch) << endl;
  return 0;
}