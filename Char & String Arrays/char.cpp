#include <iostream>
using namespace std;


// In char array if we press space , tab  or enter b/w two character,
//  It terminates the 2nd one

int main()
{
  char name[20];

  cout << "Enter your name: ";
  cin >> name;

  cout << "Your Name is: " << name <<  endl;
  
  return 0;
};