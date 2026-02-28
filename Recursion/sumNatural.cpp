#include <iostream>
using namespace std;

int getSum(int n){

  if(n == 1) return 1;

  return n + getSum(n -1); 
}

int main()
{
  int n;
  cout << "Enter a number" << endl;
  cin >> n;


  cout  << getSum(n) << endl;
  
  return 0;
}