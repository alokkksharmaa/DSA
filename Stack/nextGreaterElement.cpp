#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
  vector <int> arr = {6 , 8, 0 , 1 , 3};
  
  stack  <int> st;
  vector <int> nextGreater(arr.size(), -1);

  for(int i=0;i<arr.size(); i--){
    while(st.size() > 0 && arr[st.top()] < arr[i]){
      nextGreater[st.top()] = arr[i];
      st.pop();
    }
    st.push(i);
  }
  for(int i=0; i<nextGreater.size(); i++){
    cout << nextGreater[i] << " ";
  }
  cout << endl;

  return 0;
}