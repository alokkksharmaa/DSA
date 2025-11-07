 #include <iostream>
 using namespace std;
 
 int main()
 {
  int arr[10] = {2,34,42};
  
  cout << "Address of Array is: " << arr << endl;
  cout << "Address of 1st index is:  "<< &arr[0] << endl;
  cout << "Address of 1st index is:  "<< &arr[1] << endl;
  cout << "Address of *arr is:  "<< *arr<< endl;

  cout << "Address of *arr is:  "<< *arr + 1<< endl;

  cout << "Address of *arr is:  "<< *(arr + 1)<< endl;

  



  
  return 0;
 };