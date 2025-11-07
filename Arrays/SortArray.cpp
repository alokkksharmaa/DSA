#include <iostream>
#include <vector>
#include <algorithm>  // for sorting

using namespace std;

int main() {
    vector<int> nums = {5, 3, 8, 1, 2};
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    return 0;
}
