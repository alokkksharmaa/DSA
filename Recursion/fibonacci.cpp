#include <iostream>
using namespace std;

int fib(int n)
{
  // Base Case
  if (n == 0)
    return 0;
  if (n == 1)
    return 1;

  // reccurence relation
  return fib(n - 1) + fib(n - 2);
}

int main()
{
  int n;
  cout << "Enter the number: ";
  cin >> n;

  cout << fib(n);
  return 0;
}