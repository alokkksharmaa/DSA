#include <iostream>
using namespace std;

class Node {
  public:
  int data;
  Node* next;

  Node(int data){
    this -> data = data;
    this -> next = nullptr;
  }
};

int getMiddle(Node* head){
  Node* slowptr = head;
  Node* fastptr = head;

  while(fastptr != nullptr && fastptr-> next != nullptr){
    
    slowptr =  slowptr -> next;

    fastptr = fastptr -> next -> next;
  }
  return slowptr-> data;
}


int main()
{

  Node* head = new Node(1);
  head->next = new Node(20);
  head -> next -> next = new Node(5);
  head->next->next->next = new Node(40);
  head->next->next->next->next = new Node(50);
  head->next->next->next->next->next = new Node(60);

  cout << getMiddle(head)<< endl;

  
  return 0;
}