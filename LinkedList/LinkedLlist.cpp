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
    this->next = NULL;
  };
};

void insertAthead(Node *&head, int data)
{
  Node *temp = new Node(data);
  temp->next = head;
  head = temp;
}

void insertAtTail(Node *&tail, int data)
{
  Node *temp = new Node(data);
  tail->next = temp;
  tail = temp;
}

// Insert a Node after a given Node in Linked List
// Input: LinkedList = 2 -> 3 -> 4 -> 5, newData = 1, key = 2
// Output: LinkedList = 2 -> 1 -> 3 -> 4 -> 5
Node *insertAfter(Node *&head, int key, int newData)
{

  Node *curr = head;

  while (curr != nullptr)
  {
    if (curr->data == key)
    {
      break;
      curr = curr->next;
    }
  }

  // if curr becomes NULL means, given key is not
  // found in linked list
  if (curr == nullptr)
  {
    cout << "Node not found" << endl;
    // Return the head of the original linked list
    return head;
  }

  // Allocate new node and make the element to be inserted
  // as a new node
  Node *newNode = new Node(newData);

  // Set the next pointer of new node to the next pointer of given node
  newNode->next = curr->next;

  // Change the next pointer of given node to the new node
  curr->next = newNode;

  // Return the head of the modified linked list
  return head;
}

void Print(Node *&head)
{
  Node *temp = head; // start from head

  while (temp != NULL)
  {
    cout << temp->data << " " << endl;
    temp = temp->next;
  }
  cout << endl;
};
int main()
{
  Node *head = NULL; // empty train, no carriages
  Node *tail = NULL; // we'll add tail later

  insertAthead(head, 10); // Creates [10 | NULL]
  Print(head);
  insertAthead(head, 34);
  Print(head);
  insertAthead(head, 57);
  Print(head);
  insertAtTail(tail, 30);
  Print(head);

  return 0;
}