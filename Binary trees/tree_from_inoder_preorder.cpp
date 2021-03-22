
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

};

unordered_map<int,int>mp;
int idx=0;
Node *solve(int in[],int pre[], int lb,int ub)
{
    if(lb>ub)
    {
        return NULL;
    }
    Node *res=new Node(pre[idx++]);
    if(lb==ub)
    {
        return res;
    }
    int mid=mp[res->data];
    res->left=solve(in,pre,lb,mid-1);
    res->right=solve(in,pre,mid+1,ub);
    return res;
    
}
Node* buildTree(int in[],int pre[], int n)
{
    idx=0;
    
    for(int i=0;i<n;i++)
    {
        mp[in[i]]=i;
    }
    Node *root= solve(in,pre,0,n-1);
    return root;
    

}