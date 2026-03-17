#include <iostream>
#include <algorithm>
using namespace std;

class Node
{
public:
  int data;
  Node *left;
  Node *right;

  Node(int val)
  {
    data = val;
    left = nullptr;
    right = nullptr;
  }
};

int heightofTree(Node *root)
{

  if (root == nullptr)
  {
    return 0;
  };

  int leftHeight = heightofTree(root->left);
  int rightHeight = heightofTree(root->right);

  return 1 + max(leftHeight, rightHeight);
}

int main()
{
  // Let's build a quick 3-level tree
  //       1
  //      / \
  //     2   3
  //    /     
  //   4     
  Node *root = new Node(1);
  root->left = new Node(2);
  root->left = new Node(3);
  root->left->left = new Node(4);
  cout << "Tree Height: " << heightofTree(root) << endl;

  return 0;
}