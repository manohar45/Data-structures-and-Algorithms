#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

};

class Solution
{
    public:
    vector<int> levelOrder(Node* node)
    {
      queue<Node *>q1;
      vector<int>res;
      if(node==NULL)
      {
          return res;
      }
      else
      {
          q1.push(node);
          while(!q1.empty())
          {
              struct Node *curr=q1.front();
              res.push_back(curr->data);
              if(curr->left!=NULL)
              {
                  q1.push(curr->left);
              }
              if(curr->right!=NULL)
              {
                  q1.push(curr->right);
              }
              q1.pop();
          }
          return res;
      }
    }
};