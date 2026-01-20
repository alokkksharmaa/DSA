#include <iostream>
using namespace std;

class ListNode
{
public:
  int data;
  ListNode *next;

  ListNode(int data)
  {
    this->data = data;
    this->next = nullptr;
  };
};

ListNode *removeElements(ListNode *head, int val)
{
  ListNode *dummy = new ListNode(0); 
  dummy ->next = head;
  
  ListNode *prev = dummy, *curr = head;

  if (head == nullptr)
    return head;
    
  while(curr != nullptr){
    if(curr -> data == val){
      prev -> next  = curr -> next;
      curr = curr -> next;
    }
    else{
      prev = curr;
      curr = curr -> next;
    }
  }
  return dummy -> next;
}


int main()
{
  ListNode *head = new ListNode(1);
  head -> next = new ListNode(2);
  head -> next = new ListNode(6);
  head -> next = new ListNode(3);
  head -> next = new ListNode(4);
  head -> next = new ListNode(5);
  head -> next = new ListNode(6);

  int val = 6;

  ListNode* res = removeElements(head, val);
  while (res != nullptr) {
      cout << res->data << " ";
      res = res->next;
  }
  
  return 0;
}