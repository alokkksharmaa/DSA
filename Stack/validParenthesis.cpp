#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
  if (s.length() <= 1){
  return false;
  }

  stack<char> st;

  for (int i = 0; i < s.size(); i++)
  {
    if (st.empty() &&
            s[i] == '(' ||
        s[i] == '{' || s[i] == '[')
    {
      st.push(s[i]);
    }
    else
    {
      if (st.empty())
        return false;

      if (s[i] == ')' && st.top() == '(' ||
          s[i] == '}' && st.top() == '{' ||
          s[i] == ']' && st.top() == '[')
      {
        st.pop();
      }else{
        return false;
      }
    }
  }
  return st.empty();
}

int main()
{
  string s;
  getline(cin, s);
  cout << isValid(s);
}
