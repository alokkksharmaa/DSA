#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s)
{
  stack<char> st;

  for(int i = 0; i<s.size() ; i++)
  {
    if(s[i] == '(' || s[i] == '[' || s[i] == '{')
    {
      st.push(s[i]);
    }
    else
    {
      if(st.empty())
        return false;
      char c = st.top();
      st.pop();
      if((s[i] == ')' && c != '(') ||
        (s[i] == ']' && c != '[') || 
        (s[i] == '}' && c != '{'))
        return false;
    }
  }
  return st.empty();
}


int main()
{
  string s = "({[]})";
  if(isValid(s))
    cout << "Valid Parenthesis" << endl;
  else
    cout << "Invalid Parenthesis" << endl;
    

  return 0;
}