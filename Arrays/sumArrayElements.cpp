#include <iostream>
using namespace std;

int main()
{
  int arr[] = {2, 5, 1, 3, 5, 6, 67, 73, 56, 6};

  int n = sizeof(arr) / sizeof(arr[0]);

  int sum = 0;
  for (int i = 0; i < n; i++)
  {

    sum += arr[i];
  };

  cout << sum << endl;

}