#include <bits/stdc++.h>
using namespace std;

bool containsNearbyDuplicate(int arr[], int n, int k)
{

  unordered_set<int> s;

  for (int i = 0; i < n; i++)
  {
    if (s.count(arr[i]))
      return true;

    s.insert(arr[i]);

    if (n > k)
    {
      s.erase(arr[i - k]);
    }
  }
  return false;
}

int main()
{
  int arr[] = {1, 2, 3, 1};
  int n = sizeof(arr) / sizeof(arr[0]);
  int k = 3;

  int Printduplicate =  containsNearbyDuplicate(arr,n,k);

  cout <<  Printduplicate << endl;
  return 0;
}