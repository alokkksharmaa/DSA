#include <iostream>
using namespace std;

long long int BinarySearch(int n) {
    int s = 0;
    int e = n;
    long long int ans = -1;
    while (s <= e) {
        long long int mid = s + (e - s) / 2;
        long long int square = mid * mid;

        if (square == n) {
            return mid;
        }
        if (square < n) {
            ans = mid;
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Square root is: " << BinarySearch(n) << endl;
    return 0;
}
