#include <bits/stdc++.h>
using namespace std;

// denotions  int i = srcx, int j = srcy

void solve(int i, int j, vector<vector<int>>& a, int n,vector<string> &ans, string move, vector<vector<int>>& vis)
{

  if (i == n - 1 && j == n - 1)
  {
    ans.push_back(move);
    return;
  }

  vis[i][j] = 1;
  

  // downward
  if(i+1<n && !vis[i+1][j] && a[i][j] == 1){
    solve(i+1, j, a, n, ans, move + 'D', vis);
  }

  // left
  if( j-1 >= 0 && !vis[i][j-1] && a[i][j-1] == 1){
    solve(i, j-1, a, n, ans, move + 'L', vis);
  }

  // right
  if( j+1<n && !vis[i][j+1] && a[i][j+1] == 1){
    solve(i, j+1, a, n, ans, move + 'R', vis);
  }
  

  // up
  if(i-1 >= 0 && !vis[i-1][j] && a[i-1][j] == 1){
    solve(i-1, j, a, n, ans, move + 'U', vis);
  }


  vis[i][j] = 0;

}

vector<string> main()
{
  int m[4][4] = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};

  size_t n = sizeof(m) / sizeof(m[0][0]);
  vector<string> ans;
  vector<vector<int>> vis(n, vector<int>(n, 0));


  // very simple base case;
  if (m[0][0] == 1)
  {
    solve(0, 0, a, n, ans, "" , vis);
  };

  

  return ans;
}