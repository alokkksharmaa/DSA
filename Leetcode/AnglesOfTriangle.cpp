#include  <bits/stdc++.h> 
using namespace std;

#include <vector>
class Solution {
public:
    vector<double> internalAngles(vector<int>& sides) {

        vector<int> inputSidesCopy = sides;

      double sideA = sides[0];
      double sideB = sides[1];
      double sideC = sides[2];

      if(sideA + sideB  <= sideC ||
          sideA + sideC <= sideB ||
          sideB + sideC <= sideA){
        return {};
          }
      auto computeAngle = [] (double oppositeSide, 
                             double adjacentSide1,
                             double adjacentSide2){
        double cosineValue = (adjacentSide1 * adjacentSide1 + 
                             adjacentSide2 * adjacentSide2 -
                             oppositeSide * oppositeSide)
                            /(2 * adjacentSide1 * adjacentSide2);

        cosineValue = max(-1.0, min(1.0, cosineValue));

        return acos(cosineValue) * 180.0 / M_PI;
        };

      vector<double> angles;

      angles.push_back(
        computeAngle(sideA, sideB , sideC)
      );

      angles.push_back(
        computeAngle(sideB, sideA, sideC)
      );

      angles.push_back(
        computeAngle(sideC, sideA, sideB)
      );

      sort(angles.begin(), angles.end());


      return angles;    
      
    }
};