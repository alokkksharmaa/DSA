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

class LinkedList
{
  Node *head;

public:
  // constructor
  LinkedList()
  {
    head = nullptr;
  };

  void insertAtHead(int data)
  {
    Node *newNode = new Node(data);

    if (head == nullptr)
    {
      head = newNode;
      return;
    };

    newNode->next = this->head;
    this->head = newNode;
  }

  void Print()
  {
    Node *temp = head;

    if (head == nullptr)
    {
      cout << "List empty" << endl;
      return;
    };

    while (temp != NULL)
    {
      cout << temp->data << " ";
      temp = temp->next;
    };
  };
};

int main()
{
  LinkedList list;

  list.insertAtHead(29);
  list.insertAtHead(39);
  list.insertAtHead(23);
  list.insertAtHead(79);

  cout << "Elements of linkedList are:  ";

  list.Print();
  cout << endl;

  return 0;
};