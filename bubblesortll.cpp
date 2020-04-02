#include<iostream>
#include"linkedlisthead.h"
using namespace std;


node* bubblesortll(node* &head)
{
     int l = lengthl(head);
     for(int i=0;i<l;i++)
     {
         node* c = head;
         node* p = NULL;
         node*n;

        //sort or not
        while(c && c->next)
        {
            n = c->next;
            if(c->data > n->data)
            {
                if(!p)
                {
                    c->next = n->next;
                    n->next = c;
                     p = head = n;

                }
                else{
                    c->next = n->next;
                    n->next = c;
                    p->next = n;
                    p = n;
                }
            }

			else{
				// swapping wont happen
				p = c;
				c = n;
			}

        }

     }
     return head;
}


int main()
{
     node* head = NULL;
    for(int i=0;i<=8;i++)
        insertatfront(head,i);
    printll(head);
    node* ans = bubblesortll(head);
    if(!ans)
        cout<<"NULL";
    else
        printll(ans);


    return 0;
}
