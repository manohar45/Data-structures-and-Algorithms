# include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};






void mirror(struct node *root)
{
    if(root==NULL)
    {
        return ;
    }
    else
    {
        struct node *curr ;
        mirror(root->left) ;
        mirror(root->right) ;

        curr=root->left;
        root->left=root->right;
        root->right=curr;

    }
}


