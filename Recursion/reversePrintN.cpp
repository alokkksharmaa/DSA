#include <iostream>
using namespace std;

int reversePrint(int n) {

  if(n < 1){return 0;};

  cout << n  << " " ;

  reversePrint(n-1);

}

int main()
{
  
  int n;
  cout << "Enter n: " << endl;
  cin >> n;

  reversePrint(n);
  
  return 0;
}