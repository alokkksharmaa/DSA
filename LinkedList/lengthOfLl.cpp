#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

  Node(int new_data)
  {
    data = new_data;
    next = nullptr;
  }
};

int CountNodes(Node* head){
  int count = 0;
  // for(;head; head = head -> next) count++;

  Node* current = head;
  while(current != nullptr){
    current = current -> next;
    count++;
  }
  return count;
}

    void
    Print(Node *&head)
{
  Node *temp = head;

  while (temp != 0)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
};

int main()
{

  // Create a hard-coded linked list:
  // 1 -> 3 -> 4 -> 6
  Node *head = new Node(1);
  head->next = new Node(3);
  head->next->next = new Node(4);
  head->next->next->next = new Node(6);

  cout << "Count of node is: " << CountNodes(head) << " " << endl;

  Print(head);

  return 0;
}