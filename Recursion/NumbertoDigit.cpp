#include <iostream>
using namespace std;

void SayDigit(int nums, string arr[])
{

  // Base class
  if (nums == 0)
    return;

  int digits =  nums % 10;
  nums  = nums / 10;

  SayDigit(nums, arr);
  

  cout << arr[digits] << " " ;
}

int main()
{
  int nums;
  cin >> nums;

  string arr[10] = {"zero", "one", "two", "three",
                    "four", "five", "six"
                                    "seven",
                    "eight", "nine"};

  SayDigit(nums, arr);

  return 0;
}