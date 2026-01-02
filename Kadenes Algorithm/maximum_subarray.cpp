#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int MaxmumSubArray(int *arr, int n){
  int best_ending = arr[0];
  int best_so_far = arr[0];

  for (int i = 1; i < n; i++){
    best_ending = max(arr[i], best_ending + arr[i]);
    best_so_far = max(best_ending, best_so_far);
  }
  return best_so_far;
};

int main(){
  int arr[] = {2, 3, 4, -3, -1, 6, -2, 1, -1, 3};
  int n = sizeof(arr) / sizeof(arr[0]);

  int best = MaxmumSubArray(arr, n);

  cout <<  "Maximum Sum of SubArray is: " << best << endl;
}