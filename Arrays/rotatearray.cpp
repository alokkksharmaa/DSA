#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {2, 4, 6, 1, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    rotate(arr, arr + 1, arr + n);

    for (int x : arr) {
        cout << x << " ";
    }
}