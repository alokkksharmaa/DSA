#include <vector> 
#include <iostream>
using namespace std;

// index     — abhi kahan khada hoon
// target    — abhi kitna aur chahiye
// arr       — original array
// ans       — saare valid combinations
// ds        — current combination jo bana raha hoon

void findCombination(int index , int  target, vector<int>&arr,
                     vector<vector<int>>&ans, vector<int> &ds)
{
  // base case
  if(target == 0) {
    ans.push_back(ds);
    return ;
  }
  if (index == arr.size()) return;


};

int main()
{

  vector<int>arr =  {2, 3, 6, 7};
  int target = 7;


  vector<vector<int>> ans;
  vector<int> ds;


  findCombination(0, target, arr, ans, ds);

  for (auto& combo : ans)
  {
      for (int x : combo) cout << x << " ";
      cout << endl;
  }

  return 0;
}