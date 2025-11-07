#include <iostream>
using namespace std;

void reverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int PrintArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[6] = {8, 3, 5, 2, 6, 1};

    cout << "Original array: ";
    PrintArray(arr, 6);

    reverse(arr, 6);

    cout << "Reversed array: ";
    PrintArray(arr, 6);

    return 0;
}