#include <bits/stdc++.h>
using namespace std;

vector <vector <int>> MergeIntervals(vector<vector <int>> &intervals, int n){
  if (intervals.empty()) return {};
  vector <vector <int>> res;
  sort(intervals.begin(), intervals.end());

  int start = intervals[0][0];
  int end   = intervals[0][1];

  for(int i=1;i<intervals.size(); i++){

    int s = intervals[i][0];
    int e = intervals[i][1];

    if(s <= end){
      end = max(end , e);
    }
    else{
      res.push_back({start , end});
      start = s;
      end = e;
    }
  }
  res.push_back({start, end});
  return res;
};

int main()
{
  vector<vector<int>> intervals = {
    {1, 3},
    {2, 6},
    {8, 10},
    {15, 18}
};

  int n = intervals.size();

  vector <vector <int>> merged = MergeIntervals(intervals,n);

  for(const auto &iv : merged){
    cout <<"[" << iv[0] << ","  << iv[1] << "]";
  }
  cout << "\n";
  return 0;
}