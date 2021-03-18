#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

};

class Solution{
    public:
    int height(struct Node* root){
        if(root==NULL)
        {
            return 0;
        }
        int l=height(root->left);
        int r=height(root->right);
        if(l>r)
        {
            return 1+l;
        }
        else
        {
            return 1+r;
        }
    }
};