#include <iostream>
#include <stack>
using namespace std;

int main(){
  stack<string> s;

  s.push("Alok");
  s.push("Kumar");
  s.push("Sharma");

  cout << "Top Element: " << s.top() << endl;
  s.pop();
  cout << "Top Element: " << s.top() << endl;

  cout << "Size of Stack: " << s.size() << endl;

  cout << "Empty Or not: " << s.empty() << endl;

}