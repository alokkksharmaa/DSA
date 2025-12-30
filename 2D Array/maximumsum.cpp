#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int MaximumWealth(const vector<vector<int>> &accounts)
{
    int richest = 0;
    for (const auto &customer : accounts)
    {
        int current = 0;
        for (int money : customer)
        {
            current += money;
        }
        richest = max(richest, current);
    }
    return richest;
}

int main()
{
    vector<vector<int>> accounts = {
        {1, 2, 3},
        {3, 2, 5}};

    int result = MaximumWealth(accounts);
    cout << "Richest Customer Wealth: " << result << endl;

    return 0;
}
