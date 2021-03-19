#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

};



vector <int> zigZagTraversal(Node* root)
{
	stack<Node*>s1;
	stack<Node*>s2;
	vector<int >res;
	
	s1.push(root);
	while(!s1.empty() || !s2.empty())
	{
	    while(!s1.empty())
	    {
	        struct Node *curr=s1.top();
	        res.push_back(curr->data);
	        if(curr->left!=NULL)
	        {
	            s2.push(curr->left);
	        }
	        if(curr->right!=NULL)
	        {
	            s2.push(curr->right);
	        }
	        s1.pop();
	    }
	    while(!s2.empty())
	    {
	        struct Node *curr=s2.top();
	        res.push_back(curr->data);
	        if(curr->right!=NULL)
	        {
	            s1.push(curr->right);
	        }
	        if(curr->left!=NULL)
	        {
	            s1.push(curr->left);
	        }
	        s2.pop();
	    }
	}
	return res;
}