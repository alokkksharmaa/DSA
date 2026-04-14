#include <iostream>
using namespace std;

struct Node
{
  /* data */
  int data;
  Node *left;
  Node *right;

  Node(int val)
  {
    data = val;
    left = right = nullptr;
  }
};

void inOrder(Node *root)
{

  if (root == nullptr)
    return;

  // left -> root -> right
  inOrder(root->left);
  cout << root->data << " ";
  inOrder(root->right);
}

int main()
{
  struct Node *root = new Node(1);

  root->left = new Node(2);
  root->left->left = new Node(4);
  root->left->right = new Node(7);
  root->left->left->left = new Node(11);
  root->left->left->right = new Node(8);

  root->right = new Node(3);
  root->right->right = new Node(5);
  root->right->left = new Node(6);

  inOrder(root);

  return 0;
}