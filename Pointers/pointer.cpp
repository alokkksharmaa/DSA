#include <iostream>
using namespace std;

int main()
{
  // pointer to int is created & pointing to some garbage value
  // int *p = 0;  //bad practice

  // cout << *p << endl; //segmentation fault

  // int i = 5;
  // // int *p = &i;

  // int *p = 0;
  // p = &i;

  // cout << p << endl;
  // cout << *p << endl;

  


  int num = 5;
  int *p =  &num;


  int *q = p;
  cout << p << "-" << q << endl;
  cout << *p << "-" << *q << endl;
  

  // impt concept 
  int i = 5;
  int *t = &i;
  *t++;
  cout << *t++ << endl;


  

  return 0;
};