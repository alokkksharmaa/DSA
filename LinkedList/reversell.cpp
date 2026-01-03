#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

  Node(int data)
  {
    this->data = data;
    this->next = nullptr;
  };
};

Node *reverseList(Node *head) {

  Node *curr = head, *prev = nullptr, *next;

  while(curr != nullptr){
    // Node* next = curr -> next;
    next = curr -> next;

    curr -> next = prev;
    prev = curr;
    curr = next;
  }
  return prev;
}

void printList(Node *head)
{
  Node * temp = head;
  while (temp != nullptr)
  {
    cout << temp -> data << " ";
    temp = temp -> next;
  }
}
int main()
{

  Node *head = new Node(1);
  head->next = new Node(2);
  head->next->next = new Node(3);
  head->next->next->next = new Node(4);
  head->next->next->next->next = new Node(5);

  head = reverseList(head);

  printList(head);

  return 0;
}