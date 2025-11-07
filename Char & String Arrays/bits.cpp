#include <iostream>
using namespace std;

int BinaryNumber(int n){
  int k = 1;
  while(true){
    int x  = (1 << k) - 1;
    if(x >= n) return x;
    k++;
  }
}

int main()
{
    int n;
    cout <<  "Enter the number to Covert  into binary"<< endl;

    cin >> n;
    
    cout<< "Binary Number is:  " <<  BinaryNumber(n) << endl; 

    return 0;
};