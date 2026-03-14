#include <iostream>
using namespace std;

long long factorial(int n)
{

  // base case
  if (n == 0)
    return 1;
  return n * factorial(n - 1);
}

int main()
{
  int n;
  cout << "Enter num for factortai " << endl;
  cin >> n;

  factorial(n);

  cout << "Factorial of Given number is: " << factorial(n) << endl;

  return 0;
}