
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

};



void printLeaves(struct Node *root,vector<int> &res)
{
    if(root==NULL)
    {
        return;
    }
    printLeaves(root->left,res);
    
        if(root->left==NULL && root->right==NULL)
        {
            res.push_back(root->data);
        }
    printLeaves(root->right,res);
}

void printRight(struct Node *root,vector<int> &res)
{
    if(root==NULL)
    {
        return;
    }
    if(root->right)
    {
        printRight(root->right,res);
        res.push_back(root->data);
        
    }
    else if(root->left)
    {
        printRight(root->left,res);
        res.push_back(root->data);
        
    }
}

void printLeft(struct Node *root,vector<int> &res)
{
    if(root==NULL)
    {
        return;
    }
    if(root->left)
    {
        res.push_back(root->data);
        printLeft(root->left,res);
    }
    else if(root->right)
    {
        res.push_back(root->data);
        printLeft(root->right,res);
    }
}

void printBoundaryUtils(struct Node *root,vector<int> &res)
{
    if(root==NULL)
    {
        return;
    }
    res.push_back(root->data);
    printLeft(root->left,res);
    printLeaves(root->left,res);
     printLeaves(root->right,res);
    printRight(root->right,res);
    
   
    
}


vector <int> printBoundary(Node *root)
{
     vector<int>res;
     printBoundaryUtils(root,res);
     return res;
     
}