#include <iostream>
#include <list>
using namespace std;

int main()
{
  list<int> l;


  // Copying list 
  list<int> n(5,100);
  cout << "Printing n" << endl; 
  for (int i : n)
  {
    cout << i  << " ";
  }

  cout << endl ;


  // Inserting element in list
  l.push_back(1);
  l.push_back(34);
  l.push_front(3);
  l.push_front(23);

  // Deleting element in list
  l.pop_back();
  l.pop_front();

  for (int i : l)
  {
    cout << i  << " ";
  }
  cout <<  endl ;

  cout << "Size of list: " << l.size();


  // copy list element

}