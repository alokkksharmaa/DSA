#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
};

void AlternateSwap(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]); // increment array elements to +1;
        }
        cout << endl;
    }
};

int main()
{
    int even[6] = {4, 5, 2, 67, 8, 25};
    int odd[5] = {4, 2, 34, 21, 78};

    int size;

    AlternateSwap(even, 6);
    AlternateSwap(odd, 5);

    printArray(even, 6);
    printArray(odd, 5);

    return 0;
}