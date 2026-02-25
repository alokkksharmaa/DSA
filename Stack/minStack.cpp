#include <iostream>
#include <stack>
using namespace std;

class MinStack {
    stack<int> st, s;

public:
    void push(int val){
        s.push(val);
        if(st.empty() || val <= st.top())
            st.push(val);
    }
    void pop(){
        if(s.top() == st.top())
            st.pop();
        s.pop();
    }

    int top(){
        return s.empty() ? -1 : s.top();
    }

    int getMin() {
        return st.empty() ? -1 : st.top();
    }
};

int main() {
    MinStack ms;

    ms.push(5);
    ms.push(2);
    ms.push(10);
    ms.push(1);

    cout << "Top: " << ms.top() << endl;        // 1
    cout << "Min: " << ms.getMin() << endl;     // 1

    ms.pop();

    cout << "Top after pop: " << ms.top() << endl;   // 10
    cout << "Min after pop: " << ms.getMin() << endl; // 2

    return 0;
}
