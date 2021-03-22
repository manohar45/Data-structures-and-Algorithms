
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

};


void diagonalUtil(struct Node *root,int hd,map<int,vector<int>>&mp)
{
    if(root==NULL)
    {
        return ;
    }
    
    mp[hd].push_back(root->data);
    diagonalUtil(root->left,hd+1,mp);
    diagonalUtil(root->right,hd,mp);
    
}

vector<int> diagonal(Node *root)
{
   map<int,vector<int>>mp;
   vector<int >res;
   diagonalUtil(root,0,mp);
   
   for(auto it:mp)
   {
       vector<int> v=it.second;
        for(auto it:v)
        {
            res.push_back(it);
        }
   }
   return res;
}


