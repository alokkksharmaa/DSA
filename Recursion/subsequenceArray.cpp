#include <iostream>
#include <vector>
using namespace std;

void subsequences(int arr[], int n, int index, vector<int> output)
{

  if (index == n)
  {
    for (int x : output)
    {
      cout << x << endl;
      return;
    }
  }

  // exclude
  subsequences(arr, n, index + 1, output);

  // include
  output.push_back(arr[index]);
  subsequences(arr, n, index + 1, output);
}

int main()
{
  int arr[] = {2, 4, 1, 5, 7, 9};
  int n = sizeof(arr) / sizeof(arr[0]);

  subsequences(arr, 0, n, {});

  return 0;
}