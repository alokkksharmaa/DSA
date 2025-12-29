#include <iostream>
using namespace std;

class LinkedList
{
  struct Node
  {
    int data;
    Node *next;

    Node(int data)
    {
      this->data = data;
      this->next = nullptr;
    };
  };

  void insertAtHead(Node *&head, int data)
  {
    Node *temp = new Node(data); // create new node
    temp->next = head;           // new node points to old head
    head = temp;                 // head now points to new node
    // Note: if list was empty, tail should also be updated (see bonus below)
  }

  void insertAtTail(Node *&tail, int data)
  {
    Node *temp = new Node(data);
    if (tail != nullptr)
    {
      tail->next = temp;
    }
    tail = temp; // new node becomes the tail
  }
  void Print(Node *&head)
  { // we only need head to print
    Node *temp = head;

    while (temp != nullptr)
    {
      cout << temp->data << " ";
      temp = temp->next; // move to next node (was missing!)
    }
    cout << endl;
  }

  int main()
  {
    Node *head = nullptr;
    Node *tail = nullptr;

    insertAtHead(head, 10);
    // When list was empty, after inserting first node, tail should also point to it
    if (tail == nullptr)
      tail = head;

    Print(head); // Output: 10

    insertAtHead(head, 20);
    Print(head); // Output: 20 10

    insertAtHead(head, 57);
    Print(head); // Output: 57 20 10

    return 0;
  }
};