#include <bits/stdc++.h>
using namespace std;

/*
    Function: findPaths

    Purpose:
    --------
    Recursively explores all possible paths from source (0,0)
    to destination (n-1,n-1) in a grid.

    Movement allowed:
        D - Down
        L - Left
        R - Right
        U - Up

    Parameters:
    -----------
    row          -> current row position
    col          -> current column position
    grid         -> input maze matrix (1 = path, 0 = blocked)
    n            -> size of grid (n x n)
    paths        -> stores all valid paths
    currentPath  -> string representing path taken so far
    visited      -> tracks visited cells to avoid cycles
*/

void findPaths

    int
    main()
{

  vector<vector<int>> maze{
      {1, 0, 0, 0},
      {1, 1, 0, 0},
      {1, 1, 0, 0},
      {0, 1, 1, 1},
  };

  // determine it's size
  int n = sizeof(maze) / sizeof(maze[0][0]);

  // visited path, another grid of visited
  vector<vector<int>> visited(n, vector<int>(n, 0));

  string path;

  if (maze[0][0] == 1)
  {
  }
}