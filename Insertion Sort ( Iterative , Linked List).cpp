#include<iostream>
using namespace std;

class node
{
  public:
    int data;
    node* next;
    node(int d)
    {
       data = d;
       next = NULL;
    }
};

void insertatend(node* &head, int data)
{
	if(head==NULL)
	head = new node(data);
	else
	{
		node* temp = head;
		node* n = new node(data);
		while(temp->next)
		temp = temp->next;
		temp->next = n;
	}
}

void printll(node* head)
{
	//node* temp = head;
	while(head)
	{
		cout<<head->data<<" ";
		head = head->next;

	}
}

void insertionsort(node* head)
{
	//node* p = NULL;
	node* c = head;
	while(c->next)
	{
		node* n = c->next;
		node* a = head;
		node* b = head;
		if(n->data<c->data)
		{
			c->next = n->next;
			if(a->data>n->data)
			{
				n->next = a;
				head = n;
			}
			else
			{
				a = a->next;
				while(a->data<=n->data)
				{
					a = a->next;
					b = b->next;
				}
				b->next = n;
				n->next = a;
			}
		}
		else
		c = n;
	}
	printll(head);
}

int main() {

	node* head = NULL;
	int n,m;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>m;
		insertatend(head,m);
	}
	//printll(head);
	insertionsort(head);
	return 0;
}
