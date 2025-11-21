#include <iostream>
using namespace std;

int ArmstrongCheck(int n)
{

  if (n == 0)
    return 0;

  int digit = n % 10;
  int cube =  digit * digit * digit;

  return cube +  ArmstrongCheck(n / 10);
}

int main()
{
  int n;
  cout << "Enter the digit to check Armstrong" << endl;
  cin >> n;

  int sum = ArmstrongCheck(n);

  if(sum  == n){
    cout <<"Armstrong Number" << endl;
  }else{
    cout << "Not an Armstrong number" << endl;
  }

  return 0;
}