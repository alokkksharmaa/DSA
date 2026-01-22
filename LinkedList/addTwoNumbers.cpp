#include <iostream>
using namespace std;

struct Node{
  int data;
  Node *next;

  Node(int data){
    this -> data = data;
    this -> next = nullptr;
  };
};

Node* addTwoList(Node* &head, int data){
  // step 1 revrse list
  Node* curr = head, *prev = nullptr, *next= nullptr;

  while (curr != nullptr)
  {
      next = curr -> next;
      curr -> next = prev;
      prev = curr;
      curr = next;
  }
  return prev;

  
  
}
 
int main()
{

  Node* head = new Node(2);
  head -> next = new Node(3);
  head -> next = new Node(6);


    
  return 0;
}