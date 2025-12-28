#include <iostream>
using namespace std;

class Node
{
public:
  int value;
  Node *next;

  // Node(int value){
  //   this -> value = value;
  //   this -> next =  NULL;
  // }
};

void printList(Node *n)
{
  while (n != 0)
  {
    cout << n->value << " " << endl;
    n = n->next;
  }
}

int main()
{

  Node *head = new Node();
  Node *second = new Node();
  Node *third = new Node();

  head->value = 1;
  head->next = second;
  second->value = 3;
  head->next = third;
  second->value = 5;
  head->next = NULL;

  printList(head);

  return 0;
}