
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

};

int solve(struct Node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    int a=solve(root->left);
    int b=solve(root->right);
    int x=root->data;
    root->data=a+b;
    return a+b+x;
}

// Convert a given tree to a tree where every node contains sum of values of
// nodes in left and right subtrees in the original tree
void toSumTree(Node *node)
{
    solve(node);
}
