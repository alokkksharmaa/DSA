#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node *next;

  Node(int data)
  {
    this->data = data;
    this->next = next;
  };
};

bool DetectCycle(Node *head)
{
  Node *slow = head;
  Node *fast = head;

  while (fast != nullptr && fast->next != nullptr)
  {
    slow = slow->next;
    fast = fast->next->next;

    if (slow == fast)
    {
      return true;
    }
  }
  return false;
}

int main()
{
  Node *head = new Node(10);
  head->next = new Node(45);
  head->next = new Node(76);
  head->next = new Node(67);
  head -> next -> next = head -> next;

  DetectCycle(head);
  return 0;
};