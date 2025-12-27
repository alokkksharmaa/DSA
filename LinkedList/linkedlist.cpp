#include <iostream>
using namespace std;

class Node
{
public:
  int val;
  Node *next;
};

void PrintList(Node *n)
{
  while (n != 0)
  {
    cout << n->val << " ";
    n = n->next;
  }
}

int main()
{

  Node *head = new Node();
  Node *second = new Node();
  Node *third = new Node();

  head->val = 1;
  head->next = second;
  second->val = 3;
  second->next = third;
  third->val = 4;
  third->next = NULL;

  PrintList(head);

  return 0;
}