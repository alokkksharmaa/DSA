#include <iostream>
#include <unordered_set>
using namespace std;

// longest substr without repeating characher

int substr(string str, int n)
{

  int maxlen = 0;
  for (int i = 0; i < n; i++)
  {
    unordered_set<char> st;

    for (int j = i; j < n; j++)
    {

      if (st.count(str[j]))
        break;

      st.insert(str[j]);

      maxlen = max(maxlen, j - i + 1);
    }
  }
  return maxlen;
}

int main()
{
  string str = "cadbzabcd";
  int n = str.length();
  
  cout << substr(str, n);

  return 0;
}