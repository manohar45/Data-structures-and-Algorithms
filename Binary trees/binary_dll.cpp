
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

};



void dll(struct Node *root,struct Node **head )
{
    if(root==NULL)
        {
            return  ;
        }
        static Node *prev=NULL;
        dll(root->left,head);
        if(prev==NULL)
        {
            *head=root;
        }
        else
        {
            root->left=prev;
            prev->right=root;
        }
        prev=root;
        dll(root->right,head);
}

// This function should return head to the DLL
class Solution
{
    public:    
    Node * bToDLL(Node *root)
    {
        struct Node *head=NULL;
        dll(root,&head);
        return head;
        
        
    }
};