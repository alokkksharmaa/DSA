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

void findPaths(int row,int col,vector<vector<int>>& grid,int n,vector<string>& paths,
               string currentPath,vector<vector<int>>& visited)
{
    // Destination reached
    if (row == n - 1 && col == n - 1)
    {
        paths.push_back(currentPath);
        return;
    }

    // Mark current cell as visited
    visited[row][col] = 1;

    // Move Down
    if (row + 1 < n && !visited[row + 1][col] && grid[row + 1][col] == 1){
      findPaths(row + 1,col,grid,n,paths,currentPath + 'D',visited);
    }

    // Move Left
    if (col - 1 >= 0 && !visited[row][col - 1] && grid[row][col - 1] == 1){
        findPaths(row,col - 1,grid,n, paths,currentPath + 'L',visited);
    }

    // Move Right
    if (col + 1 < n && !visited[row][col + 1] && grid[row][col + 1] == 1){
        findPaths(row, col + 1,grid,n,paths,currentPath + 'R',visited);
    }

    // Move Up
    if (row - 1 >= 0 && !visited[row - 1][col] && grid[row - 1][col] == 1){
        findPaths(row - 1,col,grid,n,paths,currentPath + 'U',visited);     
    }

    // Backtrack
    visited[row][col] = 0;
}

int main()
{
    vector<vector<int>> grid =
    {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };

    int n = grid.size();

    vector<string> paths;

    // Visited matrix to prevent revisiting cells
    vector<vector<int>> visited(n,vector<int>(n, 0));

    // Start only if source is open
    if (grid[0][0] == 1){
        findPaths(0,0,grid,n,paths,"",visited);
    }

    // Print paths
    for (auto& path : paths)
    {
        cout << path << " " << endl;
    }

    return 0;
}