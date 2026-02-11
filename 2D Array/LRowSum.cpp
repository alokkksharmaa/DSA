#include <iostream>
using namespace std;

int printLargestRowSum(int arr[][4], int rows, int cols){

  int maxSum = INT_MIN;  // start very low
  int rowIndex = -1;

    for(int i=0; i<3; i++){
      int sum = 0;
      for(int j=0; j<4; j++){
          sum += arr[i][j];
      }
      if (sum > maxSum)
        {
            maxSum = sum;
            rowIndex = i;
        }
    }
    cout << "Row " << rowIndex << " has the largest sum = " << maxSum << endl;
    return maxSum;
}

int main()
{
  int arr[3][4];

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cin >> arr[i][j];
    }
  }

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cout << arr[i][j];
    }
  }

  printLargestRowSum(arr, 3, 4);


  return 0;
}