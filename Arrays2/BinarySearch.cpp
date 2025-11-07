#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = (start + end) / 2;

    while (start <= end)
    {
        mid = (start + end) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}
            
int main()
{
    int odd[6] = {2, 3, 6, 8, 9, 12};
    int even[5] = {12, 16, 18, 20, 22};

    int oddIndex = BinarySearch(odd, 6, 9);
    cout << "Index of 9 is " << oddIndex << endl;

    int evenIndex = BinarySearch(even, 5, 20);
    cout << "Index of 20 is " << evenIndex << endl;
}