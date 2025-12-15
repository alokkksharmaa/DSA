#include <iostream>
using namespace std;

int findPivot(int arr[], int n)
{
    int s = 0;
    int end = n - 1;

    while (s <= end)
    {   
        int mid = s + (end - s) / 2;
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return s;
}

int main()
{
    int arr[6] = {8, 10, 12, 17, 6, 23};

    cout << "Pivot is : " << findPivot(arr, 6) << endl;
}