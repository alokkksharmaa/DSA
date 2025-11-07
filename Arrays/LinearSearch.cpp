#include <iostream>
using namespace std;

bool Search(int arr[], int size, int key)
{

    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[5] = {4, 6, 26, 2, 5};

    int key;
    cout << "Enter the Element to search for" << endl;
    cin >> key;

    bool found = Search(arr, 5, key);

    if (found)
    {
        cout << "Key found" << endl;
    }
    else
    {
        cout << "key not found" << endl;
    }
    return 0;
}