#include <bits/stdc++.h>
using namespace std;

void nextgreaterleft(int *arr, int n){
  stack<int> st;
  vector<int> v;

  for (int i = 0; i < n; i++)
  {
    if (st.empty())
    {
      v.push_back(-1);
    }
    else if (st.size() > 0 && st.top() < arr[i])
    {
      v.push_back(st.top());
    }
    else if (st.size() > 0 && st.top() > arr[i])
    {
      while (st.size() > 0 && st.top() > arr[i])
      {
        st.pop();
      }
      if (st.empty())
      {
        v.push_back(-1);
      }
      else
      {
        v.push_back(st.top());
      }
    }
    st.push(arr[i]);
  };

  // reverse(v.begin(), v.end());

  for (auto x : v)
  {
    cout << x << ',';
  }

};

int main()
{
  int arr[] = {4, 5, 2, 10, 8};
  // output  = -1 4 -1 2 2
  int n = sizeof(arr) / sizeof(arr[0]);

  nextgreaterleft(arr, n);

  return 0;
}