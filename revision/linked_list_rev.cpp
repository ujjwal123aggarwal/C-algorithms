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

void insertatfront(node* &head, int data)
{
    if(head==NULL)
    {
        head = new node(data);
        return;
    }
    node* temp = new node(data);
    temp->next = head;
    head = temp;
}

void printll(node* head)
{
    if(!head)
        return;

    while(head)
    {
        cout<<head->data<<"-->";
        head = head->next;
    }

}

void insert_back(node* &head, int data)
{
    if(!head)
    {
        head = new node(data);
        return;
    }

    node* temp = head;
    while(temp->next)
        temp = temp->next;
    node* d = new node(data);
    temp->next = d;

}

void deleteatfirst(node* &head)
{
    if(!head)
        return;
    node* n = head;
    head = head->next;
    delete n;
}

void deleteatend(node* &head)
{
    if(!head)
        return;

    node* temp = head;
    node* temp2 = head->next;
    while(temp2->next)
       {
           temp = temp->next;
           temp2 = temp2->next;
       }
    temp->next = NULL;
    delete temp2;

}

void deleteatindex(node* &head, int index)
{
    if(!head)
        return ;

    node* n = head;
    node* p = head->next;
    int count = 2;
    while(count!=index)
    {
        p = p->next;
        n = n->next;
        count++;
    }
    n->next = p->next;
    delete p;
}

void insertatmid(node* &head, int data, int index)
{
    if(!head)
        return;

    node* p = head;
    node* q = head->next;
    int count=1;
    while(count!=index)
    {
        p = p->next;
        q = q->next;
        count++;
    }

    node* n = new node(data);
    p->next = n;
    n->next = q;
}

void reverses(node* &head)
{
    node* q = head;
    node* p = NULL;
    node* n;
    while(q)
    {
        n = q->next;
        q->next = p;
        p = q;
        q = n;
    }
    head = p;
}
int main()
{
    node* head = NULL;
    insert_back(head,0);
    insert_back(head,1);
    insert_back(head,2);
    insert_back(head,3);
    insert_back(head,4);
    insert_back(head,5);
    insert_back(head,6);
    insert_back(head,7);
    insert_back(head,8);
    deleteatfirst(head);
    //deleteatfirst(head);
    deleteatend(head);
    insertatmid(head,75,3);
    deleteatindex(head,5);
     printll(head);
     cout<<endl;
    reverses(head);
    printll(head);

}
