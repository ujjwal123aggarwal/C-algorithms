#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node* next;
		node(int d)
		{
			data = d;
			next = NULL;
		}
};


int lengthl(node* head)
{
    int count = 0;
    while(head)
    {
        count++;
        head = head->next;
    }return count;
}

void insertatend(node* &head, node* &tail, int data)
{
	if(head==NULL)
	head = tail = new node(data);
	else
	{
		node* n = new node(data);
		tail->next = n;
		tail = n;
	}
}

void printl(node* head)
{
	while(head)
	{
		cout<<head->data<<" ";
		head = head->next;
	}cout<<endl;
}


void reversee(node* &head, node* &tail, node* p, node* c, int size)
{
	if(c == NULL)
	{
	return;
	}
	node* n = c->next;
	c->next = p;

	reversee(n, tail, c, n, size);
		if(lengthl(head)==size)
		printl(head);
}

int main() {
	int n,m;
	cin>>n;
	node* head = NULL;
	node* tail = NULL;
	for(int i=0;i<n;i++)
	{
		cin>>m;
		insertatend(head,tail,m);
	}

	reversee(head, tail, NULL, head, n);


	return 0;
}
