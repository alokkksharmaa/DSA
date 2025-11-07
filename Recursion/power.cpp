#include <bits/stdc++.h>

using namespace std;

int power(int n)
{
  // base class
  if (n == 0)
    return 1;

  int smaller_Problem = power(n - 1);
  int Bigger_Problem = 2 * smaller_Problem;

  return Bigger_Problem;
}

int main()
{
  int n;
  cin >> n;

  int ans = power(n);

  cout << ans << endl;
  
  return 0;

}
