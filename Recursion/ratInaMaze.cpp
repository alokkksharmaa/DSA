#include <bits/stdc++.h>
using namespace std;

void solve(int i, int j, int maze[4][4], string path, vector<string> &ans, int n)
{

  if (i == n - 1 && j == n - 1)
  {
    ans.push_back(path);
    return;
  }
}

vector<string> main()
{
  int maze[4][4] = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};

  size_t n = sizeof(maze) / sizeof(maze[0][0]);
  vector<string> ans;

  // very simple base case;
  if (maze[0][0] == 0)
  {
    return ans;
  };

  int visited = 1;

  int srcx = 0;
  int srcy = 0;

  string path = " ";

  return ans;
}