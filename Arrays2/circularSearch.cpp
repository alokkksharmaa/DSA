// 2515. Shortest Distance to Target String in a Circular Array
// Constraints:

#include <iostream>
#include <vector>
using namespace std;


int minStepsToTarget(vector<int> arr, int n, int start, int target){

  for(int step=0;step<= n/2; step++){
    int right = (start + step) % n;
    int left  = (start - step + n) % n;

    if(arr[right] == target) return step;
    if(arr[left] == target)  return step;
  }
}

int main(){

  vector<int> arr = {20, 30, 40, 50};
  int n = arr.size();


}