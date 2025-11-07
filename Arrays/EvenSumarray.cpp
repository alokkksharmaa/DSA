#include <iostream>
using namespace std;

int EvenSum(int arr[] , int size){

    int sum = 0;
    for(int i=0; i<size; i++){
        if(arr[i] % 2 == 0){
            sum += arr[i];
        }
    }
    return sum;
}

int main()
{
    int arr[] = {3,45,6,1,2,6};
    
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "Sum of even elements in an array: " << EvenSum(arr, size) << endl;

return 0;
}