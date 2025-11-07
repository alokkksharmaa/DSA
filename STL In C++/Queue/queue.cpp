#include <iostream>
#include <queue>
using namespace std;

int main(){
  queue<string> q;

  q.push("Alok");
  q.push("Kumar");
  q.push("Sharma");

  cout << "First Element: " << q.front() << endl;

  q.pop();
  cout << "First Element: " << q.front() << endl;

  cout <<  "Size after Pop: " << q.size() << endl;
}