#include<iostream>
#include "linkedlisthead.h"
using namespace std;


node* mid(node* head)
{
    if(!head || !head->next)
        return head;
        node* fast = head->next;
        node* slow = head;
        while(fast && fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;

}

node* mergell(node* &head1, node* &head2)
{
    //basecase
    if(!head1)
        return head2;
    if(!head2)
        return head1;

    //recursive
    node* newhead;
    if(head1->data<head2->data)
    {
        newhead = head1;
        newhead->next = mergell(head1->next,head2);
    }
    else
    {
        newhead = head2;
        newhead->next = mergell(head1, head2->next);
    }
    return newhead;

}


node* mergesortll(node* head)
{
    //basecase
    if(!head || !head->next)
        return head;
    //recursive
    //devide
    node* mids = mid(head);
    node* a = head;
    node* b = mids->next;
    mids->next = NULL;
    //sort
    a = mergesortll(a);
    b = mergesortll(b);
    //merge o
    node* newheadd = mergell(a,b);
    return newheadd;
}

int main()
{
    node* head = NULL;
    for(int i=0;i<=8;i++)
        insertatfront(head,i);
    printll(head);
    node* ans = mergesortll(head);
    if(!ans)
        cout<<"NULL";
    else
        printll(ans);



    return 0;
}
