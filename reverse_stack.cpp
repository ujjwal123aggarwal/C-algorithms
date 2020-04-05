#include<iostream>
#include<stack>
using namespace std;

void print(stack<int> s);

void pushbottom(stack<int> &s, int t)
{
    if(s.empty())
    {s.push(t);
    return;}

    int top = s.top();
    s.pop();
    pushbottom(s,t);
    s.push(top);

}

void reversestack(stack<int> &s)
{
    if(s.empty())
        return;

    int topelement = s.top();
    s.pop();
    reversestack(s);
    pushbottom(s,topelement);

}

void print(stack<int> s)
{
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }cout<<endl;
}

int main()
{
    stack<int> s;
    for(int i=0;i<4;i++)
    {
        s.push(4-i);
    }
    print(s);
    reversestack(s);
    print(s);



}
