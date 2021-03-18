
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

};


vector<int> leftView(Node *root)
{
    queue<Node *>q;
    vector<int>res;
   if(root==NULL)
   {
       return res; ;
   }
   else
   {
       q.push(root);
       while(!q.empty())
       {
          int size=q.size();
          for(int i=1;i<=size;i++)
          {
              struct Node *curr=q.front();
              if(i==1)
              {
                  res.push_back(curr->data);
              }
              if(curr->left!=NULL)
              {
                  q.push(curr->left);
              }
              if(curr->right!=NULL)
              {
                  q.push(curr->right);
              }
              q.pop();
          }
       }
       return res;
   }
}
