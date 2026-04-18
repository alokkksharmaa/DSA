#include <iostream>
using namespace std;

int main()
{
  int arr[] = {2,5,1,7,10};
  int n = sizeof(arr)/sizeof(arr[0]);

  int k = 14;

  int sum = 0;

  for(int i = 0; i<n; i++){
    // int sum = 0;
    for(int j=i;j<n; j++){
      sum = sum +  arr[j];
      if(sum <= k){
        int maxlen =  max(maxlen, sum);
      }else{
        if(sum > k) break;
      }
    }
  }
  return 0;
}