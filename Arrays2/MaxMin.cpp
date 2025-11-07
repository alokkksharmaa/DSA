#include <iostream>
#include <climits>
using namespace std;

int getMax(int size, int arr[])
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > INT_MIN)
            max = arr[i];
    }
    return max;
}

int getMin(int size, int arr[])
{
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < INT_MAX)
            min = arr[i];
    }
    return min;
}

int main()
{
    int size;
    cin >> size;
    
    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Minimum in the array: " << getMin(size, arr) << endl;
    cout << "Maximum in the array: " << getMax(size, arr) << endl;
    return 0;
}
