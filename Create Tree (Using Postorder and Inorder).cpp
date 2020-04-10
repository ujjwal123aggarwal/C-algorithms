#include<iostream>
#include<queue>
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
int k;
node* build(int* post, int* IN, int s , int e)
{
	if(s>e)
		return NULL;
	int data = post[k--];
	node* root = new node(data);
	if(s == e)
		return root;

	int j = -1;
	for(int i=s;i<=e;i++)
	{

		if(IN[i]==data)
		{
			j = i;
			break;
		}
	}
	root->right = build(post,IN,j+1,e);
	root->left = build(post,IN,s,j-1);
	return root;
}

void preorder(node* root)
{
	if(root == NULL)
	return;

	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}

node* printtree(node* root)
{
	if(root==NULL)
	return NULL;

	node* leftt = root->left;
	node* rightt = root->right;


	if(leftt && rightt)
	{
		cout<<leftt->data<<" => "<<root->data<<" <= "<<rightt->data;
	}
		else if(!leftt && rightt)
	{
		cout<<"END"<<" => "<<root->data<<" <= "<<rightt->data;
	}
		if(leftt && !rightt)
	{
		cout<<leftt->data<<" => "<<root->data<<" <= "<<"END";
	}
	if(!leftt && !rightt)
	{
		cout<<"END"<<" => "<<root->data<<" <= "<<"END";
	}
	cout<<endl;

	printtree(root->left);
	printtree(root->right);



}

int main() {
	int post[100],IN[100],n,m;
	//cin>>t;
	//for(int j=1;j<=t;j++)
	//{
		cin>>n;
		k = n-1;
		for(int i=0;i<n;i++)
		cin>>post[i];
		cin>>m;
		for(int i=0;i<m;i++)
		cin>>IN[i];
		node* ans = build(post,IN,0,m-1);
	//preorder(ans);
	printtree(ans);
	//}


	return 0;
}
