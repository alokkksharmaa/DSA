#include <iostream>
using namespace std;

struct Node
{
  /* data */
  int data;
  Node *left;
  Node *right;

  Node(int val)
  {
    data = val;
    left = right = nullptr;
  }
};




int main()
{

  return 0;
}