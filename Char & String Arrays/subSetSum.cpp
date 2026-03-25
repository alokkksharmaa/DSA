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

  generateSubSetSum(index + 1, currentSum + arr[index] , arr, n , subsetSum);

  generateSubSetSum(index + 1, currentSum , arr, n , subsetSum);

}

int main()
{
    
  return 0;
}