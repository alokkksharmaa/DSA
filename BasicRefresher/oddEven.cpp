#include <iostream>
using namespace std;

int main()
{
  int n ;
  cout << "Enter a number" << endl;
  cin >> n;

  if(n % 2 == 0) {
    cout <<  "Num is even ";
  }
  else{
    cout << "Num is Odd";
  }
  return 0;
}