#include<iostream>
#include"linkedlisthead.h"
using namespace std;

void breakll(node* &head)
{
    node* fast = head->next->next;
    node* slow = head->next;
    while(fast!=slow)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    node* p = head;
    slow = head;
    while(p->next!=fast)
        p = p->next;
    while(slow!=fast)
    {
        slow = slow->next;
        fast = fast->next;
        p = p->next;
    }
    p->next=NULL;
    printll(head);
}

bool iscyclic(node* &head)
{
    node* fast = head;
    node* slow = head;
    while(fast && fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;
        if(fast==slow)
            return true;
    }
    return false;
}

void cycle(node* &head)
{
    node* temp = head;
    while(temp->next)
        temp = temp->next;
    temp->next = head->next->next;
}

int main()
{
    node* head = NULL;
    for(int i=8;i>=1;i--)
        insertatfront(head,i);
    cycle(head);
   // bool ans = iscyclic(head);
   // cout<<boolalpha;
    //cout<<ans;
    breakll(head);


    return 0;
}
