#include <iostream>
using namespace std;

void update(int arr[], int n)
{
    cout << "Entering in function" << endl;
    arr[2] = 6;

    cout << "Array inside function: ";
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Exiting from function" << endl;
}

int main()
{
    int arr[3] = {1, 2, 5};

    update(arr, 3);

    cout << "Array in main after function call: ";
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "main function" << endl;
}
