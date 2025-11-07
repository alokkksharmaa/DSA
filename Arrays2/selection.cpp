#include <iostream>
using namespace std;

int selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
            swap(arr[minIndex], arr[i]);
        }
    }
}

int main(){
    int arr[] = {43,87,12,78,98};
    int size = sizeof(arr)/ sizeof(arr[0]);

    selectionSort(arr,);

    for(int i=0; i<n;i++){
        cout << arr[i] << " " ;
        return 0;
    }
}