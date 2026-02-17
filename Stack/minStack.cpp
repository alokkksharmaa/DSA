#include <stack>
#include <iostream>
using namespace std;

class MinStack
{
  stack<int> st, s;

public:
  // push function
  void push(int val)
  {
    s.push(val);
    if (st.empty() || val <= st.top())
      st.push(val);
  }

  void pop()
  {
    if (s.top() == st.top())
        st.pop();
    s.pop();
  }

  int top()
  {
    return s.empty() ? -1 : s.top();
  }

  int getMin()
  {
    return s.empty() ? -1 : s.top();
  }
};

int main()
{
  MinStack ms;

  ms.push(5);
  ms.push(2);
  ms.push(10);
  ms.push(1);


  cout << "top:  " << ms.top() << endl;
  cout << "min:  " << ms.getMin() << endl;

  ms.pop();

  cout << "Top after pop: "  << ms.top() << endl;
  cout << "Min after pop: "  << ms.getMin() << endl;

  return 0;
}
