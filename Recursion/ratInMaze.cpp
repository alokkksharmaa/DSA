#include <bits/stdc++.h>
using namespace std;

/*
    Function: explorePaths

    Purpose:
    --------
    Recursively explores all possible paths from source (0,0)
    to destination (n-1,n-1) in the grid.

    Parameters:
    -----------
    row, col       -> current position in the grid
    grid           -> maze matrix (1 = open, 0 = blocked)
    size           -> dimension of grid
    allPaths       -> stores all valid paths
    currentPath    -> path formed so far
    visited        -> tracks visited cells
    deltaRow       -> movement in row direction
    deltaCol       -> movement in column direction
*/

void explorePaths(
    int row,
    int col,
    vector<vector<int>>& grid,
    int size,
    vector<string>& allPaths,
    string currentPath,
    vector<vector<int>>& visited,
    int deltaRow[],
    int deltaCol[])
{
    // Base case: destination reached
    if (row == size - 1 && col == size - 1)
    {
        allPaths.push_back(currentPath);
        return;
    }

    // Mark current cell as visited
    visited[row][col] = 1;

    // Direction labels
    string directions = "DLRU";

    // Try all 4 directions
    for (int index = 0; index < 4; index++)
    {
        int nextRow = row + deltaRow[index];
        int nextCol = col + deltaCol[index];

        // Check if next position is valid
        if (nextRow >= 0 && nextCol >= 0 && nextRow < size && nextCol < size &&
            !visited[nextRow][nextCol] && grid[nextRow][nextCol] == 1)
        {
            explorePaths(
                nextRow,
                nextCol,
                grid,
                size,
                allPaths,
                currentPath + directions[index],
                visited,
                deltaRow,
                deltaCol);
        }
    }

    // Backtrack
    visited[row][col] = 0;
}

int main()
{
    // Example maze
    vector<vector<int>> grid =
    {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };

    int size = grid.size();

    vector<string> allPaths;

    // Visited matrix
    vector<vector<int>> visited(
        size,
        vector<int>(size, 0)
    );

    // Movement directions
    int deltaRow[] = { +1, 0, 0, -1 };
    int deltaCol[] = { 0, -1, 1, 0 };

    // Start traversal if source is open
    if (grid[0][0] == 1)
    {
        explorePaths(
            0,
            0,
            grid,
            size,
            allPaths,
            "",
            visited,
            deltaRow,
            deltaCol);
    }

    // Print all paths
    for (const string& path : allPaths)
    {
        cout << path << endl;
    }

    return 0;
}