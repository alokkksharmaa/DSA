#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

void generateSubSetSum(int index, int currentSum, const int arr[],
                        int n, vector<int>&subsetSum)
{

  // base case :  all elements processesed

  if(index == n){
    subsetSum.push_back(currentSum);
    return;
  }

  generateSubSetSum(index + 1, currentSum , arr, n , subsetSum);


  generateSubSetSum(index + 1, currentSum + arr[index] , arr, n , subsetSum);


}

int main()
{
  int arr[] = {2, 3};
  int n = sizeof(arr)/sizeof(arr[0]);

  vector<int> subSetSum;

  generateSubSetSum(0, 0, arr, n , subSetSum);

  // sort(subSetSum.begin(), subSetSum.end());

  for(auto x : subSetSum){
    cout << x << " ";
  }
  cout << endl;

    
  return 0;
}