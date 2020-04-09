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

void levelorder(node* root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        node* ans = q.front();
        q.pop();
        if(ans==NULL)
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout<<ans->data<<" ";
            if(ans->left)
                q.push(ans->left);
            if(ans->right)
            q.push(ans->right);
        }
    }
}


node* levelorderin()
{
    int data;
    cin>>data;
    if(data==-1)
        return NULL;
    node* root = new node(data);
    queue<node*> q;
    q.push(root);
    while(!q.empty())
    {
        node* temp = q.front();
        q.pop();
        int d1,d2;
        cout<<"enter child of "<<temp->data;
        cin>>d1>>d2;
        if(d1!=-1)
        {
            temp->left = new node(d1);
            q.push(temp->left);
        }
        if(d2!=-1)
        {
            temp->right = new node(d2);
            q.push(temp->right);
        }

    }return root;

}

int main()
{
    node* root = NULL;
root = levelorderin();
   levelorder(root);


}
