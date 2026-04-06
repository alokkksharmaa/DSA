#include <bits/stdc++.h>
using namespace std;

// naive approach
// Time Complexity: O(n log n)
// Auxiliary Space: O(1)

// int kthLargest(int arr[], int n, int k)
// {

//   sort(arr, arr + n);

//   return arr[n - k];
// };




// [Expected Approach] Using Priority Queue(Min-Heap) - O(n * log(K)) time and O(K) space
int kthLargest(int arr[], int n, int k){

  priority_queue<int , vector<int>, greater<int>> pq;

  for(int i=0;i<n;i++){

    pq.push(arr[i]);


    if(pq.size() > k){
      pq.pop();
    }
  }

  return pq.top();

}

int main(){

  int arr[] = {1, 2, 3, 4, 5, 6};
  int n = sizeof(arr) / sizeof(arr[0]);
  int k = 2;
  //  output = 5;

  cout << "size of array is: " << n << endl;
  cout << "Kth largest element in an array is: " << kthLargest(arr, n, k) << endl;

  return 0;
}