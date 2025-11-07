#include <iostream>
using namespace std;

int Sum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int size;
    cout << "Enter the Size of an array" << endl;
    cin >> size;
    int arr[100];
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Sum of element of array is: " << Sum(arr, size) << endl;
    
    return 0;
}