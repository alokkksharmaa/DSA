#include <iostream>
#include <array>

using namespace std;

void printArray(int arr[], char ch[], int size)
{
    cout << "Printing the Array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl ; 
    cout << "Printing Done" << endl;
};
int main()
{
    // int array[51];
    // cout << "Value at index 79 " <<  array[78] <<  endl;

    // int array[26] = {3, 5, 1, 7, 44};
    // int n = 26;      
    // printArray(array, n);


    char ch[5] = {'s','4','e', 'n' ,'6'};
    int n  = 5;
    for(int i=0; i<n ; i++){
        cout << ch[i] << " " <<  endl ;

    }
    cout << endl ;
    return 0;
}