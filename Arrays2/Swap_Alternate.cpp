#include <iostream>
using namespace std;

void PrintArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void AlternateSwap(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {   
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
}

int main()
{
    int arr[5] = {5, 6, 2, 52, 45};
    int arr1[6] = {2, 3, 5, 1, 22, 44};

    AlternateSwap(arr, 5);
    AlternateSwap(arr1, 6);

    PrintArray(arr, 5);
    PrintArray(arr1, 6);

    return 0;
}