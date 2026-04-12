#include <iostream>
using namespace std;

// leetcode contest 12 Apr, Sunday 2026 

#include <iostream>
#include <vector>

class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {

      int n = matrix.size();
      vector<int> res (n, 0);

     for(int i =0;i<n;i++){
       int degree = 0;

       for(int j = 0; j <n; j++){
         if(matrix[i][j] == 1){
           degree++;
         }
       }
       res[i] = degree;
     }

      return res;
      
    }
};