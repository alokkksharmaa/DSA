#include <iostream>
using namespace std;

class Node{
public:
  int data;
  Node *next;

  Node(int data)
  {
    this->data = data;
    this->next = nullptr;
  };
};

// Iterative Approach
// bool searchKey(Node* head, int key){
//   Node* curr = head;

//   if(curr = nullptr) return false;

//   while(curr != nullptr)
//   {
//     if(curr -> data == key)
//     return true;

//     curr = curr -> next;

//   }
//   return false;
// };

// Recursive Approach
bool searchKey(Node *head, int key){
  if (head = nullptr) // base case
    return false;

  if (head -> data == key)
    return true; // if it's present return true

  // recurr for the remaining list
  return searchKey(head->next, key);
}

int main()
{
  // create a hard-coded linked list:
  // 1 -> 2 -> 3 -> 4 -> 5
  Node *head = new Node(1);
  head->next = new Node(2);
  head->next->next = new Node(3);
  head->next->next->next = new Node(4);
  head->next->next->next->next = new Node(5);

  int key = 5;

  if (searchKey(head, key))
    cout << "true";
  else
    cout << "false";

  return 0;
}