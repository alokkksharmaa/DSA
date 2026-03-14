#include <iostream>
using namespace std;

void printn(int n)
{
  if (n == 0)
    return;

    cout << n << " ";   // n to 1

  printn(n - 1);

  cout << n << " ";  /// 1 to n
}
int main()
{
  int n;
  cout << "Enter n";
  cin >> n;

  printn(n);

  return 0;
}