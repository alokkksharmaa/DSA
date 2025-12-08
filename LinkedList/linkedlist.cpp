#include <iostream>
using namespace std;

// Node structure for the linked list
class Node
{
public:
  int data;   // stores the value
  Node *next; // stores the address of next

  Node(int val)
  {
    data = val;  // put the value inside the node
    next = NULL; // new node doesn't point anywhere yet
  }
};

// function to print the entire linked list
void PrintList(Node *head)
{
  Node *temp = head; // temp pointer is used to traverse 
  // the entire linkedlist without loosing the head

  while (temp != NULL)
  {
    cout << temp->data << " ";  //print the value of the current node 
    temp = temp->next;       //moves to the next node
  }
  cout << endl;
};

int main()
{
  Node *head = NULL;  //empty list initially

  head = new Node(3);   // first node
  head->next = new Node(5); //2nd Node
  head->next->next = new Node(7);  //3rd Node

  PrintList(head);   //prints 3 5 7

  return 0;
}