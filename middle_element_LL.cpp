#include<iostream>
#include "linkedlisthead.h"
using namespace std;

/*class node{
    public:
    int data;
    node* next;
    node(int d)
    {
        data = d;
        next = NULL;
    }
};*/

node* middle(node* &head)
{
    if(!head || !head->next)
        return head;
    node* slow = head;
    node* fast = head->next;
    while(fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}


//void insertatfront(node* &head, int data)
//{
//    if(!head)
//        head = new node(data);
//    else
//    {
//        node* n = new node(data);
//        n->next = head;
//        head = n;
//    }
//
//}

//void printll(node* head)
//{
//    while(head)
//    {
//        cout<<head->data<<" ";
//        head = head->next;
//    }cout<<"NULL"<<endl;
//}


node* mergell(node* &head1, node* &head2)
{
    //base case
    if(!head1)
        return head2;
    if(!head2)
        return head1;

    //recursive case
    node* newhead;
    if(head1->data<head2->data)
    {
        newhead = head1;
        newhead->next = mergell(head1->next,head2);
    }
    else
    {
        newhead = head2;
        newhead->next = mergell(head1,head2->next);
    }
    return newhead;
    }


int main()
{
    node* head = NULL;
    node* head2 = NULL;
    int data;
    for(data=6;data>=0;data--)
    insertatfront(head,data);
    for(data=17;data>=8;data--)
    insertatfront(head2,data);
    printll(head);
    printll(head2);

//    node* ans = middle(head);
//    cout<<ans->data<<"  index:  "<<ans;
    head = mergell(head, head2);
    printll(head);

    return 0;
}
