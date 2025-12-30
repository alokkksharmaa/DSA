#include<iostream>
using namespace std;

// int main() {
//     int arr[3] = {1, 2, 3};
//     int *ptr = arr;
//     cout << *(ptr + 2);
//     return 0;
// };

int main(){
int x = 35;
int* p = &x;
cout <<"value of x: "  << x <<endl;
cout << "address of x: "<< &x << endl;
cout << "value of  p: " << *p << endl;
cout << "address of p: " << p << endl;
  return 0;
};