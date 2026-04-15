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

vector<vector<int>> levelOrder(Node *root)
{

  vector<vector<int>> res;
  if (!root)
    return res;

  queue<Node *> q;
  q.push(root);

  while (!q.empty())
  {
    int levelSize = q.size();
    vector<int> level;

    for (int i = 0; i < levelSize; i++)
    {
      Node *curr = q.front();
      q.pop();

      level.push_back(curr->data);

      if (curr->left)
        q.push(curr->left);
      if (curr->right)
        q.push(curr->right);
    }
    res.push_back(level);
  }
  return res;
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

  vector<vector<int>> result = levelOrder(root);

  for(auto x : result) {
    for(auto y : x){
      cout << y << " ";
    }
  }
  return 0;
}