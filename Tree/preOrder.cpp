#include <iostream>
using namespace std;

struct Node{
  int data;
  Node *left;
  Node *right;

  Node(int val){
    data = val;
    left = right = nullptr;
  }
};


void preOrder(Node){

  if(Node == nullptr){
    return;
  } 


  // preorder = Root, Left, Right
  // print(node -> data);




}


int main()
{

  struct Node* root = new Node(1);


    
  return 0;
}