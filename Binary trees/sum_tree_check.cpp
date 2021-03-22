
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
    int f=1;
    int solve(struct Node* root )
    {
        if(root==NULL)
        {
            return 0;
        }
        if(root->left==NULL && root->right==NULL)
        {
            return root->data;
        }
        if(f==0)
        {
            return 0;
        }
        int a=solve(root->left);
        int b=solve(root->right);
        if(a+b!=root->data)
        {
            f=0;
        }
        return a+b+root->data;
    }
    
    
    bool isSumTree(Node* root)
    {
        f=1;
        solve(root);
        return f;
         // Your code here
    }
};