#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

};



void bottom(struct Node *root,int hd,int level,map<int,pair<int,int>>&mp)
{
    if(root==NULL)
    {
        return;
    }
    
    if(mp.find(hd)==mp.end() || level>=mp[hd].second)
    {
        mp[hd]=make_pair(root->data,level);
    }
    bottom(root->left,hd-1,level+1,mp);
    bottom(root->right,hd+1,level+1,mp);
}

// Method that returns the bottom view.
vector <int> bottomView(Node *root)
{
   map<int,pair<int,int>>mp;
   vector<int>res;
   
   bottom(root,0,0,mp);
   
   for(auto it:mp)
   {
       res.push_back(it.second.first);
   }
   return res;
}