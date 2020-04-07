#include<iostream>
#include<queue>
using namespace std;


void reverse(queue<int> &q)
{
    if(q.empty())
        return;

    int top = q.front();
    q.pop();
    reverse(q);
    q.push(top);
}

void printq(queue<int> q)
{
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }cout<<endl;
}


int main()
{
    queue<int> q;
    for(int i=0;i<6;i++)
        q.push(i);
    printq(q);
    reverse(q);
    printq(q);
    return 0;
}
