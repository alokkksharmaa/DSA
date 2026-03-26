#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

void generateSubSetSum(const int  arr[], int currentSum, int index,
                        int n, vector<int>&subsetSum)
{

  // base case :  all elements processesed

  if(index == n){
    subsetSum.push_back(currentSum);
    return;
  }


  generateSubSetSum(arr, currentSum + arr[index] , index+1, n , subsetSum);
 
  // just swap the recursion order for by default ascending order. 

  generateSubSetSum(arr, currentSum , index + 1, n , subsetSum);

}

int main()
{
  int arr[] = {2, 3};
  int n = sizeof(arr)/sizeof(arr[0]);

  vector<int> subSetSum;

  generateSubSetSum(arr, 0, 0, n , subSetSum);

  // sort(subSetSum.begin(), subSetSum.end());

  for(auto x : subSetSum){
    cout << x << " ";
  }
  cout << endl;

    
  return 0;
}