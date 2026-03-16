#include <iostream>
using namespace std;

void subsequenceSum(int arr[], int index, int solution, int sum){

  int n = sizeof(arr)/sizeof(arr[0]);

  if(index == n){
    // sum.push_back(solution);
    return;
  };

  subsequenceSum(arr, index+1, solution, sum);
}

int main()
{
  int arr[] = {1,2,1,0};

  
    
  return 0;
}