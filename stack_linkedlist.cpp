#include<iostream>
#include"linkedlisthead.h"
using namespace std;

class stack{

    node* head = NULL;
public:
    void push(int d)
    {
     insertatfront(head,d);
    }

    void pop()
    {
        deleteatfirst(head);
    }
    int top()
    {
        return head->data;
    }
    bool empty()
    {
        return head==NULL;
    }

};


int main()
{
    /*stack<char> s;
    s.push('a');
    s.push('b');
    s.push('c');
    s.push('d');
    s.push('h');*/

    stack s;
    s.push(1);
    s.push(2);
    s.push(43);
    s.push(54);
    s.push(654);
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}
