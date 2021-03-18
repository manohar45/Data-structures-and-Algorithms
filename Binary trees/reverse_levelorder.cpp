#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

};

vector<int> reverseLevelOrder(Node *root)
{
    stack<Node *>s1;
    queue<Node *>q1;
    vector<int>res;
    if(root==NULL)
    {
        return res;
    }
    else
    {
        q1.push(root);
        while(!q1.empty())
        {
            struct Node *curr=q1.front();
            if(curr->right!=NULL)
            {
                q1.push(curr->right);
            }
            if(curr->left!=NULL)
            {
                q1.push(curr->left);
            }
            s1.push(curr);
            q1.pop();
        }
        
        while(!s1.empty())
        {
            struct Node *temp=s1.top();
            res.push_back(temp->data);
            s1.pop();
        }
        return res;
    }
}