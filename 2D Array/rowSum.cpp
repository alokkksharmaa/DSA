#include <iostream>
using namespace std;

int printRowSum(int arr[][4],int row, int cols)
{

  for (int i = 0; i < 3; i++)
  {
    int sum = 0;
    for (int j = 0; j < 4; j++)
    {
      sum += arr[i][j];
    }
    cout << "Sum of row " << i << " = " << sum << endl;
  };
}

int printColSum(int arr[][4],int row, int cols)
{

  for (int j = 0; j < 4; j++)
  {
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
      sum += arr[i][j];
    }
    cout << "Sum of row " << j << " = " << sum << endl;
  };
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
  };

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  };

  printRowSum(arr, 3, 4);


  printColSum(arr,4,3);


  return 0;
}