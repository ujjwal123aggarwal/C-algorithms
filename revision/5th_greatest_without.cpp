#include<iostream>
using namespace std;

int main()
{
    int n,m,l,a[10],b[10],c[10];
    cin>>n>>m>>l;

    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<m;i++)
    cin>>b[i];
    for(int i=0;i<l;i++)
    cin>>c[i];

    int q = n-1, w = m-1, e= l-1;

    int temp;
    for(int i=0;i<5;i++)
    {
        temp = max(a[q],max(b[w],c[e]));
        if(temp==a[q]) q--;
        else if(temp==b[w]) w--;
        else e--;
    }
    cout<<temp<<endl;
}
