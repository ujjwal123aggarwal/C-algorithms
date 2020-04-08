#include<iostream>
#include<cmath>
using namespace std;

class node{
public:
	int data;
	node* left;
	node* right;
	node(int d){
		data =d;
		left = right=NULL;
	}
};

class pairr{
public:
    int height;
    bool balanced;

};

node* inserter(node* root, int data)
{
    if(root==NULL)
    {
        node* root = new node(data);
        return root;
    }
    if(data<=root->data)
        {
            root->left = inserter(root->left, data);
        return root;}
        else
        {
            root->right = inserter(root->right, data);
            return root;
        }

}

node* CreateBT(node* root)
{
    int d;
    cin>>d;
    while(d!=-1)
    {
        root = inserter(root, d);
        cin>>d;
    }
    return root;
}

bool isbst(node* root,int m,int n)
{
    if(root==NULL)
        return true;

    if(root->data>=m && root->data<n && isbst(root->left,m,root->data) && isbst(root->right,root->data,n))
        return true;
    else
        return false;
}

int main()
{

node* root = NULL;
root = CreateBT(root);
cout<<isbst(root,INT_MIN,INT_MAX)<<endl;

}

