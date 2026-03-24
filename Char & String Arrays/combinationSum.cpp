#include <iostream>
#include <vector>

using namespace std;

void findCombination(vector<int> &arr, int target, int index,
                     vector<vector<int>> &ans, vector<int> &v)
{

  if (index == arr.size())
  {
    if (target == 0)
    {
      ans.push_back(v);
    }
    return;
  };

  // pick up the element
  if (arr[index] <= target) // if index of arr <= taret means 4 < 7
  {
    v.push_back(arr[index]);
                         // 7   -  2  = 5 
    findCombination(arr, target - arr[index], index, ans, v);
    v.pop_back();
  };

  findCombination(arr, target, index + 1, ans, v);
};

int main()
{

  vector<int> arr = {2, 3, 6, 7};
  int target = 7;

  vector<vector<int>> ans;
  vector<int> v;

  findCombination(arr, target, 0, ans, v);

  for (auto &comb : ans)
  {
    for (int x : comb)
    {
      cout << x << " ";
    }
    cout << endl;
  }

  return 0;
}