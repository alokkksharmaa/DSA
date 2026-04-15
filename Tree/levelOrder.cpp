#include <iostream>
#include <vector>
#include <queue>
using namespace std;

//  Simulate the level order traversal of a tree (BFS);
/*
            1
          /   \
         2     3
        / \   / \
       4   7 6   5
      / \
     11  8

*/

// output:- 1, 2, 3, 4, 7, 6, 5, 11, 8

struct Node
{

  int data;
  Node *left;
  Node *right;

  Node(int val)
  {
    data = val;
    left = right = nullptr;
  }
};

void levelOrder(Node* root){

  vector<int> result;

  if(!root)  return result;

  queue<int> q;
  q.push(root);

  while(!q.empty()){

    Node* curr = q.front();
    

  }


};

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

  levelOrder(root);

  return 0;
}