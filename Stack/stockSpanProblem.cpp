#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
  vector<int> price = {100, 80, 60, 70, 60, 75, 85};

  vector<int> ans(price.size(), 0);
  stack<int> st;

  for (int i = 0; i < price.size(); i++)
  {
    while (st.size() > 0 && price[st.top()] <= price[i])
    {
      st.pop();
    }
    if (st.size() == 0)
    {
      ans[i] = i +1;
    }
    else
    {
      ans[i] = i - st.top();
    }
    st.push(i);
  }

  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }
  cout << endl;

  return 0;
}