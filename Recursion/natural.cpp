#include <iostream>
using namespace std;

int printN(int n)
{

  if (n == 0)
    return 0;

  cout << n << endl;

  printN(n - 1);

}

int main()
{
  int n;
  cout << "Enter a number to print " << endl;
  cin >> n;

  cout << printN(n);

  return 0;
}