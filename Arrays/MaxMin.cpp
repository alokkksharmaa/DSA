#include <iostream>
#include <climits>
using namespace std;

int getMax(int arr[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
int getMin(int arr[], int size)
{
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}

int main()
{
    int arr[] = {3, 2, 4, 2, 1, 34, 55, 2, 5, 32};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Minimum in the array: " << getMin(arr, size) << endl;
    cout << "Maximum in the array: " << getMax(arr, size) << endl;

    return 0;
}
