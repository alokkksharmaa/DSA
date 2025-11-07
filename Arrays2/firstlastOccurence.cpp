// #include <iostream>
// using namespace std;

// int FirstOccurence(int arr[], int size, int key)
// {
//     int s = 0;
//     int e = size - 1;
//     int ans = -1;

//     while (s <= e)
//     {
//         int mid = s + (e - s) / 2;

//         if (arr[mid] == key)
//         {
//             ans = mid;
//             e = mid - 1;
//         }
//         else if (key > arr[mid])
//         {
//             s = mid + 1;
//         }
//         else if (key < arr[mid])
//         {
//             e = mid - 1;
//         }
//     }
//     return ans;
// }
// int lastOccurence(int arr[], int size, int key)
// {
//     int s = 0;
//     int e = size - 1;
//     int ans = -1;

//     while (s <= e)
//     {
//         int mid = s + (e - s) / 2;

//         if (arr[mid] == key)
//         {
//             ans = mid;
//             s = mid + 1;
//         }
//         else if (key > arr[mid])
//         {
//             s = mid + 1;
//         }
//         else if (key < arr[mid])
//         {
//             e = mid - 1;
//         }
//     }
//     return ans;
// }

// int main()
// {

//     int even[] = {2,3,3,3,3,3,3,3,3,3,3, 3, 5, 6, 7};
//     int size = sizeof(even) / sizeof(even[0]);

//     cout << " First Occurrence of 3 is at Index " << FirstOccurence(even, size, 3) << endl;

//     cout << " Last Occurrence of 3 is at Index " << lastOccurence(even, size, 3) << endl;
//     return 0;
// }



// ---------OPTIMISED ----------


#include <iostream>
using namespace std;
int Occurrence(int arr[], int size, int key, bool findFirst) {
    int s = 0, e = size - 1;
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (arr[mid] == key) {
            ans = mid;
            if (findFirst) {
                e = mid - 1;  
            } else {
                s = mid + 1;  
            }
        }
        else if (key > arr[mid]) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }
    return ans;
}

int main() {
    int even[] = {2,3,3,3,3,3,3,3,3,3,3,3,5,6,7};
    int size = sizeof(even) / sizeof(even[0]);

    cout << "First Occurrence of 3 is at Index "
         << Occurrence(even, size, 3, true) << endl;

    cout << "Last Occurrence of 3 is at Index "
         << Occurrence(even, size, 3, false) << endl;
    return 0;
}
