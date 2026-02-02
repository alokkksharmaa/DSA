#include <iostream>
#include <stack>
using namespace std;

int main()
{
  stack<int> st;

  st.push(1);
  st.push(55);
  st.push(34);
  cout << st.top() << endl;

  st.pop();
  cout << "top element after pop" << endl;

  return 0;
}