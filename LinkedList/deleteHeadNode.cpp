#include <iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* next;
  
  Node(int data){
    this -> data = data;
    this -> next = nullptr;
  }
};

Node* deleteAtHead(Node* head){

  if(head == nullptr) return head;

  Node *temp = head;

  head = head  -> next;

  delete temp;

  return head;

}

void printList(Node *curr){
  while(curr != nullptr){
    cout << curr -> data << " ";
  }

  curr = curr -> next;

}

int main()
{
  Node *head = new Node(10);
  head -> next = new Node(23);
  head -> next = new Node(43);

  head = deleteAtHead(head);
  printList(head);
    
  return 0;
}