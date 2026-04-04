#include <bits/stdc++.h>
using namespace std;

int kthLargest(int arr[], int n, int k){

  sort(arr , arr + n );

  return arr[n-k];

};

int main()
{

  int arr[] = {1, 2, 3, 4, 5, 6};
  int n = sizeof(arr) / sizeof(arr[0]);
  int  k = 2;
  //  output = 5;

  cout << n;
  cout << endl;
  cout << kthLargest(arr, n , k) << endl;

  return 0;
}