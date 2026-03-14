#include <iostream>
using namespace std;

int func(int n , string name){

  if ( n <=  0) return;

  cout << name << endl; 

  func(n-1, name);
}

int main()
{
  int n = 0;
  cout << "Enter n" << endl;
  cin  >> n;

  string name = "Alok";
  
  func(n, name);
  return 0;
}