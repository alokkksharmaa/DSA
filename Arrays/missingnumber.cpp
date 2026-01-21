#include <iostream>
using namespace std;

int MissingNumber(int nums[], int n)
{

  int sum1 = (n + 1) * (n + 2) / 2; // 1  to n+1

  int sum2 = 0;
  for (int i = 0; i < n; i++)
  {
    sum2 += nums[i];
  };
  return sum1 - sum2;
};

int main()
{
  int nums[] = {1, 3, 4};   //output == 2;
  int n = sizeof(nums) / sizeof(nums[0]);

  cout << MissingNumber(nums, n) << endl;

  return 0;
}