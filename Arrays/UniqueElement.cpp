#include <iostream>
using namespace std;
int FindUnique(int arr[])
{
    int ans = 0;
    for (int i = 0; i < 10; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int arr[10] = {4, 2, 4, 2, 5, 3, 1, 3, 1};
    cout << FindUnique(arr) << endl;
}