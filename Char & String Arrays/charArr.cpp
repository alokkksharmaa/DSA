#include <iostream>
using namespace std;

int PrintName(char name[])
{
  int count = 0;
  for(int i = 0; name[i] != '\0'; i++){
    count++;
  }
  return count;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
    int nums = 21;
    string strNum = to_string(nums);
    cout << strNum; // prints "21"
    return 0;
}

// In char array if we press space , tab  or enter b/w two character ,
//  It terminates the 2nd one.  known as null character

int main()
{
  char name[20];

  cout << "Enter Your Name: ";
  cin >> name;

  cout << "Your name is:  " << name << endl;

  cout << "Length of Your name is: " <<  PrintName(name) << endl ;

  return 0;
};