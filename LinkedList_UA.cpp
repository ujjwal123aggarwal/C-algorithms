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

int lengthl(node* head)
{
    int count = 0;
    while(head)
    {
        count++;
        head = head->next;
    }return count;
}

void insertatfirst(node* &head, node* &tail , int data)
{
    if(head == NULL)
    {
        head = tail = new node(data);
    }
    else
    {
        node* n= new node(data);
        n->next = head;
        head = n;
    }
}


void insertatendd(node* &head, node* &tail, int data)
{
   if(head == NULL)
    {
        head = tail = new node(data);
    }
    else
    {
        node* n = new node(data);
        tail->next = n;
        tail = n;
    }
}


void insertatmid(node* &head, node* &tail, int data, int pos)
{
    if(pos==0)
        insertatfirst(head,tail,data);
    else if(pos>=lengthl(head)-1)
        insertatendd(head,tail,data);
    else
    {
        node* n = new node(data);
        node* temp = head;
        int count = 0;     //count=0 , count<pos-1
        while(count<pos-1)
        {
            temp = temp->next;
            count++;
        }
        n->next = temp->next;
        temp->next = n;
    }
}

void deleteatfirst(node* &head, node* &tail)
{
    if(head==NULL)
        return;
    else if(head->next == NULL)
        {
            delete head;
            head = tail = NULL;
        }

    else{
        node* temp;
        temp = head;
        head = head->next;
        delete temp;
    }
}

void deleteatendd(node* &head, node* &tail)
{
   if(head==NULL)
        return;
    else if(head->next == NULL)
        {
            delete head;
            head = tail = NULL;
        }
    else{
            node *temp = head;
        while(temp->next!=tail)
        {
            temp = temp->next;

        }
    temp->next = NULL;
    delete tail;
    tail = temp;
    }
}


void deleteatmidd(node* &head, node* &tail,int pos)
{
    if(pos == 0)
        deleteatfirst(head,tail);
    else if(pos>=lengthl(head)-1)
        deleteatendd(head,tail);
    else{
        node* temp;
        temp = head;
        int count = 1;
        while(count <= pos-1)
        {
            temp = temp->next;
            count++;
        }
        node* n = temp->next;
        temp->next = temp->next->next;
        delete n;

    }
}


void reversee(node* &head, node* &tail)
{
    node* p = NULL;
    node* c = head;
    node* n = head->next;
    while(c)
    {
        n = c->next;
        c->next = p;
        p = c;
        c = n;


    }
    tail = head;
    head = p;
}
void printll(node* head)
{
    while(head)
    {
        cout<<head->data<<"--->";
        head = head->next;
    }cout<<"NULL"<<endl;
}

int main()
{
    node *head = NULL;
    node *tail = NULL;
    insertatfirst(head,tail,2);
    insertatfirst(head,tail,3);
    insertatendd(head, tail , 4);
    insertatendd(head, tail , 5);
    insertatendd(head, tail , 6);
    insertatmid(head, tail, 8, 3);
    printll(head);
    deleteatfirst(head,tail);
    printll(head);
    deleteatendd(head,tail);
    printll(head);
    reversee(head,tail);
    printll(head);
    deleteatmidd(head,tail,1);
    printll(head);


}
