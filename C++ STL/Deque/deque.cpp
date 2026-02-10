// Originally Known as Doubly Ended Queue

#include <iostream>
#include <deque>
using namespace std;

int main(){
  deque<int> d;

  // Adding element to deQueue
  d.push_back(3);
  d.push_back(1);
  d.push_front(2);
  d.push_front(8);


  // Printing
  for(int i: d){
    cout << i ;
  }
  cout << endl ;

  // Printing Indexes Element
  cout << "Element at First Index-> " << d.at(1) << endl; 
  cout << "Element at Back-> " << d.back() << endl;
  cout << "Element at Front-> " << d.front() << endl;


  // Removing with erase
  cout << "Before Erase" << d.size() << endl;
  for(int i : d){
    cout << i ;
  }
  cout << endl;
  d.erase(d.begin(), d.begin() + 1);
  cout << "After Erase" << d.size() << endl;
  for(int i : d){
    cout << i ;
  }
  cout << endl;
  


  deque<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};



  return 0;
}

