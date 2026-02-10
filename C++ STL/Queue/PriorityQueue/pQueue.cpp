// MAX Heap

#include <iostream>
#include <queue>

using namespace std;

int main()
{
  // making of max_heap
  priority_queue<int> maxi;

  // making of min_heap
  priority_queue < int, vector<int>, greater<int>  >  mini;

  maxi.push(1);
  maxi.push(8);
  maxi.push(4);
  maxi.push(7);
  maxi.push(13);

  cout << "size-> " << maxi.size() << endl;

  // Printing Max heap
  int n = maxi.size();
  for (int i = 0; i < n; i++)
  {
    cout << maxi.top() << " ";
    maxi.pop();
  }
  

  // Printing min Heap
  int m = mini.size();
  for (int i=0;i<m;i++)
  {
    cout << mini.top() << " ";
    mini.pop();
    cout << endl;
    return 0;
  }
  cout << endl;

  cout << "Is it empty? " << mini.empty() << endl;
}