#include<iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int> q;
    int n,m,l,a[10],b[10],c[10];
    cin>>n>>m>>l;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        q.push(a[i]);
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
        q.push(b[i]);
    }
    for(int i=0;i<l;i++)
    {
        cin>>c[i];
        q.push(c[i]);
    }

    int countt=1;
    while(countt!=5)
    {
        q.pop();
        countt++;
    }
    cout<<q.top();
}
