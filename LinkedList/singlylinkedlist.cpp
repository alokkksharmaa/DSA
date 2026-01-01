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
  }
};

// insert at head
void insertAtHead(Node *&head, int data)
{
  Node *newNode = new Node(data); // creates a new Node
  newNode->next = head;           // asssign new node to  the head
  head = newNode;                 // now we link the new node with the head
};

void printList(Node *&head)
{
  Node *temp = head;

  while (temp != nullptr)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
};

int main()
{
  Node *head = nullptr;

  insertAtHead(head, 30);
  insertAtHead(head, 50);

  printList(head);

  return 0;
}