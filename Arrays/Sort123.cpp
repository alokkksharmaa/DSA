#include <iostream>
using namespace std;

int traverse(int arr[], int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        { // arr[mid] == 2
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
int main()
{
    int arr[16] = {0, 0, 2, 1, 2, 1, 2, 0, 0, 1, 2, 1, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    traverse(arr, 16);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}