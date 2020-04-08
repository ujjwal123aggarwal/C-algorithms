#include<iostream>
#include<queue>
using namespace std;


class node{

public:
    node* right;
    node* left;
    int data;

    node(int d)
    {
        data = d;
        right = NULL;
        left = NULL;
    }
};


class pairs{
public:
    int diameter;
    int height;
};

node* bst()
{
    int data;
    cin>>data;

    if(data==-1)
        return NULL;

    node* root = new node(data);
    root->left = bst();
    root->right = bst();
    return root;
}

void preorder(node* root)
{
    if(root==NULL)
        return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root)
{

    if(root==NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

}

void inorder(node* root)
{

    if(root==NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);


}

int countnode(node* root)
{
    if(root==NULL)
        return 0;
    return countnode(root->left)+countnode(root->right)+1;
}

int height(node* root)
{
    if(root==NULL)
        return 0;
    return max(height(root->left),height(root->right))+1;
}

int diameter(node* root)
{
    if(root==NULL)
        return 0;
    int op1 = height(root->left) + height(root->right);
    int op2 = diameter(root->left);
    int op3 = diameter(root->right);
    return max(op1,max(op2,op3));
}

pairs fast(node* root)
{
    pairs p;
    if(root==NULL)
    {
        p.diameter = p.height = 0;
        return p;
    }
    pairs left = fast(root->left);
    pairs right = fast(root->right);
    p.height = max(left.height,right.height) + 1;
    int op1 = left.height + right.height;
    int op2 = left.diameter;
    int op3 = right.diameter;
    p.diameter = max(op1,max(op2,op3));
    return p;
}

node* searchbt(node* root, int key)
{
    if(root==NULL)
        return NULL;
    if(root->data == key)
        return root;
    node* ans = searchbt(root->left, key);
    if(ans!=NULL)
        return ans;
    node* anss = searchbt(root->right, key);
    return anss;
}

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



int main()
{
    node* root = NULL;
    root = bst();
    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
//    int count = countnode(root);
//    cout<<count<<endl;
//    int heigh = height(root);
//    pairs p = fast(root);
//    cout<<"height : "<<p.height<<endl;
//    int dia = diameter(root);
//   cout<<"diameter : "<<p.diameter<<endl;
//   node* ans = searchbt(root, 14);
//   if(ans)
//    cout<<"ans is: "<<ans->right->data<<endl;
//   else
//    cout<<"not found"<<endl;
    levelorder(root);
    return 0;
}
