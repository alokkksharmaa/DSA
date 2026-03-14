#include <iostream>
using namespace std;

int count  = 0;
void  fun(){

  if(count == 3)  return;
  cout <<  count << endl;
  count++;
  fun();
}

int main()
{

  fun();

  return 0;
}