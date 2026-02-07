#include <iostream>
#include <list>
#include <stack>

using namespace std;

class Stack{
  list<int> ll;
  public:

  void push(int val){
    ll.push_front(val);
  }

  int top() {
    return ll.front();
  }

  int pop(){
    ll.pop_back(); 
  }

  bool empty(){
    return ll.size() == 0;
  }
};


int main()
{

  Stack s;  

  s.push(2);
  s.push(8);
  s.push(7);
  s.push(5);

  while(!s.empty()){
    cout << s.top() << " ";
    s.pop();
  }
  // prints 5 7 8 2 
  cout << endl;  
  return 0;
}