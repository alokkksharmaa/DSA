#include <iostream>
using namespace std;

void reachHome(int src , int dest){

  cout << "Source: " << src << "\ndestination: " << dest << endl;

  // Base Case
  if(src == dest){
    cout <<  "Reached Home" << endl;
    return;
  }

  // Processing -- increase one step
  src++;

  // recursive call;
  reachHome(src, dest);


}


int main()
{
  int src = 1;
  int dest = 10;

  reachHome(src, dest);




  return 0;
}