#include <iostream>
using namespace std;

class Node{
  public:
    int data;
    Node  *next;

    Node(int val){
      data = val;
      next = NULL;
    }
};

void PrintList(Node *head){
    Node *temp = head;

    while(temp != NULL)
    {
      cout << temp->next << " ";
      temp = temp->next;
    }
}


int main()
{
  Node *head = NULL;

  head = new Node(10);
  head->next = new Node(5);

  PrintList(head);
  return 0;
}