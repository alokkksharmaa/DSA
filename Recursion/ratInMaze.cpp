#include <bits/stdc++.h>
using namespace std;

void findPaths(int row, int col, vector<vector<int>> &maze, int n, 
               vector<string>& paths, string currentPath, vector<vector<int>>&visited )
{
  if(row == n-1 && col == n-1){
    paths.push_back(currentPath);
    return;
  };


  // mark visited as 1;
  visited[row][col] = 1;

    






  visited[row][col] = 0;

}
    int main()
{
  vector<vector<int>> maze = {
      {1, 0, 0, 0},
      {1, 1, 0, 0},
      {1, 1, 0, 0},
      {1, 1, 1, 1}};

  int n = maze.size();

  vector<vector<int>> visited(n, vector<int>(n, 0));

  vector<string> paths;

  if (maze[0][0] == 1)
  {
  };

  for (auto &path : paths)
  {
    cout << path << "" << endl;
  }

  return 0;
}
