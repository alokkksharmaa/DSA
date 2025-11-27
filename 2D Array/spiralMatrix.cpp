#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<int> spiralOrder(vector<vector<int>> &matrix)
  {

    vector<int> ans;
    int row = matrix.size();
    int col = matrix[0].size();

    int count = 0;
    int total = row * col;

    int starting_row = 0;
    int ending_col = col - 1;
    int ending_row = row - 1;
    int starting_col = 0;

    while (count < total)
    {

      // print starting row
      for (int index = starting_row; count < total && index <= ending_col; index++)
      {
        ans.push_back(matrix[starting_row][index]);
        count++;
      }
      starting_row++;

      // print ending col
      for (int index = ending_col; count < total && index <= ending_col; index++)
      {
        ans.push_back(matrix[ending_col][index]);
        count++;
      }
      ending_col--;

      // print end row
      for (int index = ending_row; count < total && index >= ending_row; index++)
      {
        ans.push_back(matrix[ending_row][index]);
        count++;
      }
      ending_row--;

      // print starting col
      for (int index = starting_col; count < total && index >= starting_col; index++)
      {
        ans.push_back(matrix[starting_col][index]);
        count++;
      }
      starting_col++;
    }
    return ans;
  }
};