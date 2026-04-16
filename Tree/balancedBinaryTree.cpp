#include <iostream>
#include <cmath>
using namespace std;


struct Node {
  int data;
  Node* left;
  Node* right;

  Node(int val){
    data = val;
    left = right = nullptr;
  }
};

int dfsHeight(Node* root){

  // base case
  if(root ==  nullptr) return 0;

  int leftHeight = dfsHeight(root -> left);
  if(leftHeight == -1) return -1;
  int rightHeight = dfsHeight(root -> right);
  if(rightHeight == -1)  return -1;

  if(abs(leftHeight - rightHeight) >1) return -1;

  return max(leftHeight, rightHeight) + 1;

}

bool isBalanced(Node* root){

  return dfsHeight(root) != -1;
}
 

int main()
{

  struct Node* root = new Node(2);
  root -> left = new Node(19);
  root->left->left = new Node(4);
  root->left->right = new Node(7);

  root->right = new Node(3);
  root->right->right = new Node(5);
  root->right->left = new Node(6);

  if(!isBalanced(root)){
    cout << "Tree is not balanced" << endl;
  }else{
    cout << "Tree is balanced!!";
  }
    
  return 0;
}