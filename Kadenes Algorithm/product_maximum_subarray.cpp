#include <bits/stdc++.h>
using namespace std;

int MaximumSubArray(int arr[], int n){
  int max_ending = arr[0];
  int min_ending = arr[0];
  int res = arr[0];
  for(int i=1;i<n;i++){
    int x = arr[i];

    int opt1 = x;
    int opt2 = max_ending * x;
    int opt3 = min_ending * x;

    max_ending =  max(opt1, max(opt2, opt1));
    min_ending = min(opt1, min(opt2,opt1));

    res =  max(res,max_ending);
  }
  return res;
}

int main()
{
  int arr[] = {-2,3,-4,6,-9,-2,-5,2,4,2};
  int n =  sizeof(arr)/sizeof(arr[0]);

  int product = MaximumSubArray(arr,n);

  cout << "The maximum product of subArray is: " << product << endl;

  return 0;
}