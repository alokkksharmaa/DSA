#include <iostream>
using namespace std;

int printN(int n){

  if(n == 0) return 0;

  int s = printN(n-1);

  int m =  n ;
  return s + n;
}

int main()
{
  int n;
  cout << "Enter a number to print sum: " << endl;
  cin >> n;

  cout << printN(n);

  return 0;
}