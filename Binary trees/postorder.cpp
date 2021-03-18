#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

void preorder(struct node *root)
{

    if (root==NULL)
    {
        return;
    }
    else
    {
        preorder(root->left);
        preorder(root->right);
        cout<<root->data<<" ";
    }
}