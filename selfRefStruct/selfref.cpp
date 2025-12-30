#include <iostream>
using namespace std;

int updateref(int &x){
  x++;
  return x;
}


int main()
{
  int x = 5;
  cout << x << endl;

  updateref(x);
  cout << x;

  return 0;
}