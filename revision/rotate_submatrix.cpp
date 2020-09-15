#include<iostream>
using namespace std;

int main()
{
    int a[][10] = {
        { 1, 2, 3, 4 ,5},
        { 6, 7, 8 ,9,10},
        { 11, 12,13,14,15 },
        { 16, 17, 18, 19, 20 }
    };

    int x,y;
    cin>>x>>y;

    int n;
    cin>>n;

    for(int i=x;i<x+n;i++)
    {
        for(int j=i;j<y+n;j++)
        {
            swap(a[i][j],a[j][i]);
        }
    }

    for(int i=x;i<x+n;i++)
    {
        int s=y,e=y+n-1;
        while(e>s)
        {
            swap(a[i][s],a[i][e]);
            s++;
            e--;
        }
    }

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<a[i][j]<<" ";
        }cout<<endl;
    }
}
