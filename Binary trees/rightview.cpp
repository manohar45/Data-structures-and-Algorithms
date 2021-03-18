
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
    vector<int> rightView(Node *root)
    {
        queue<Node *>q1;
        vector<int> res;
        if(root==NULL)
        {
           return res;;
        }
        else
        {
            q1.push(root);
            while(!q1.empty())
            {
                int size=q1.size();
                for(int i=1;i<=size;i++)
                {
                    struct Node *curr=q1.front();
                    if(i==size)
                    {
                        res.push_back(curr->data);
                    }
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
            }
            return res;
        }
    }
};