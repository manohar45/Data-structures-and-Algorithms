#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

};


int height(struct Node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    
    return max(height(root->left),height(root->right))+1;
}

bool isBalanced(Node *root)
{
    if(root==NULL)
    {
        return true;
    }
    int l=height(root->left);
    int r=height(root->right);
    
    return ((abs(l-r)<=1) && isBalanced(root->left) && isBalanced(root->right));
     
     
}
