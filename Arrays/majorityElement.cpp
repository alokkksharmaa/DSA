#include <bits/stdc++.h>
using namespace std;

// nums = {3,2,3};
// majority of it

// map which will store all the elements int key value pair
// then I will divide the n by 2,
// iterate for the map , first will be number , 2nd will be frequency
// if second > n
// return first;

// int majorityElement(int nums[], int n) {

//   unordered_map<int, int> mp;

//   for(int i=0; i<n; i++){
//     mp[nums[i]]++;
//   };


//   n = n/2;

//   for( auto x : mp ){

//     if( x.first > n ){
//       return x.second;
//     }
//   }
// };



// Boyer-Moore Voting Algorithm 

int majorityElement( int nums[],  int n ){
  
  int candidate = 0;
  int count  = 0;

  for( int i = 0; i < n; i++ ){

      int num = nums[i];
      
      if( count == 0 ){
        candidate = num;
      }

      if( num == candidate ) {
        count++;
      }else {
        count--;
      }
  };

  return candidate;

}

int main()
{

  int nums[] = {3, 2, 3};
  int n = sizeof(nums) / sizeof(nums[0]);


  majorityElement(nums, n);


};