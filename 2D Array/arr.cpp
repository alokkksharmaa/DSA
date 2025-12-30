#include <iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == target)
            {
                cout << "Element found at index [" << i << "][" << j << "]" << endl;
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int arr[3][4];

    // Input
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Print
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int target;
    cout << "Enter the element to search: ";
    cin >> target;

    if (!isPresent(arr, target, 3, 4))
    {
        cout << "Element not found" << endl;
    }
    return 0;
}
