#include <bits/stdc++.h>
using namespace std;

int fun(int n)
{
  if (n == 1)
    return 1; // base case

  int ans = fun(n - 1); // recursive case

  return ans + n;
}

int main()
{
  int n;
  cout << "Enter number";
  cin >> n;

  cout << fun(n) << endl;
}