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

void InsertAtHead(Node *&head, int data)
{

  Node *temp = new Node(data);  //creates new node
  temp->next = head;            //arrow to old head
  head = temp;                  //move head to new node
}

void insertAtTail(Node* &tail, int data){
  Node* temp = new Node(data);
  tail -> next = temp;
  tail = temp;
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
  Node *head = NULL;  //empty train, no carriages
  Node *tail = NULL;  // we'll add tail later
  
  InsertAtHead(head, 10);   //Creates [10 | NULL]
  Print(head);
  InsertAtHead(head, 34);
  Print(head);
  InsertAtHead(head, 57);
  Print(head);


  return 0;
}